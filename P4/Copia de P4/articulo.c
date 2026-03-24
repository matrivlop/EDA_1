#include <stdio.h>
#include "articulo.h"

void capturarArticulo (Articulo *unArticulo){
    printf("Clave del articulo: ");
    scanf("%d",&unArticulo->clave);
    printf("Nombre del articulo: ");
    scanf("%s",unArticulo->nombre);
    printf("Precio del articulo: ");
    scanf("%f",&unArticulo->precio);
    printf("Apellidos del proveedor: \n");
    scanf("%s",unArticulo->unProveedor.apellido);
    printf("Nombre del proveedor: \n");
    scanf("%s",unArticulo->unProveedor.nombre);
}
void listarArticulo (Articulo unArticulo){
    printf("Clave: %d\n",unArticulo.clave);
    printf("Nombre: %s\n",unArticulo.nombre);
    printf("Precio: %.2f\n",unArticulo.precio);
    printf("Proveedor: %s %s\n",unArticulo.unProveedor.apellido, unArticulo.unProveedor.nombre);
}

void listarArticulos (Articulo lista[], int cantidad) {
    if (cantidad == 0) {
        printf("No hay articulos capturados.\n");
        return;
    }
    for (int i = 0; i < cantidad; i++) {
        printf("--- Articulo %d ---\n", i + 1);
        listarArticulo(lista[i]);
    }
}

void mayorPrecio (Articulo lista[], int cantidad){
    if (cantidad == 0) {
        printf("No hay articulos para evaluar mayor precio.\n");
        return;
    }
    int indices[10]; //  máximo 10 artículos
    int numMayores = obtenerArticulosMayorPrecio(lista, cantidad, indices);
    
    if (numMayores == 0) {
        printf("No se encontraron articulos.\n");
        return;
    }
    
    float mayor = lista[indices[0]].precio;
    printf("El precio mayor es: %.2f\n", mayor);
    printf("Articulos con este precio:\n");
    
    for (int i = 0; i < numMayores; i++) {
        int idx = indices[i];
        printf("--- Articulo %d ---\n", i + 1);
        printf("Clave: %d\n", lista[idx].clave);
        printf("Nombre: %s\n", lista[idx].nombre);
        printf("Proveedor: %s %s\n", lista[idx].unProveedor.apellido, lista[idx].unProveedor.nombre);
    }
}

int obtenerArticulosMayorPrecio (Articulo lista[], int cantidad, int indices[]) {
    if (cantidad == 0) {
        return 0;
    }
    
    // Encontrar el mayor precio
    float mayor = lista[0].precio;
    for (int i = 1; i < cantidad; i++) {
        if (lista[i].precio > mayor) {
            mayor = lista[i].precio;
        }
    }
    
    // Guardar todos los índices que tengan el mayor precio
    int contador = 0;
    for (int i = 0; i < cantidad; i++) {
        if (lista[i].precio == mayor) {
            indices[contador] = i;
            contador++;
        }
    }
    
    return contador;
}

int buscarArticuloPorClave (Articulo lista[], int cantidad, int clave) {
    for (int i = 0; i < cantidad; i++) {
        if (lista[i].clave == clave) {
            return i;
        }
    }
    return -1;
}