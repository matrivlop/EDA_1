#include <stdio.h>
#include "articulo.h"

void capturarArticulos (Articulo articulos[], int size){
    for(int i = 0; i < size; i++){
        printf("Capturando articulo %d:\n", i+1);
        printf("Clave del articulo: ");
        scanf("%d",&articulos[i].clave);
        printf("Nombre del articulo: ");
        scanf("%s",articulos[i].nombre);
        printf("Precio del articulo: ");
        scanf("%f",&articulos[i].precio);
        printf("Apellidos del proveedor: \n");
        scanf("%s",articulos[i].unProveedor.apellido);
        printf("Nombre del proveedor: \n");
        scanf("%s",articulos[i].unProveedor.nombre);
    }
}
void listarArticulos (Articulo articulos[], int size){
    for(int i = 0; i < size; i++){
        printf("Articulo %d:\n", i+1);
        printf("Clave: %d\n",articulos[i].clave);
        printf("Nombre: %s\n",articulos[i].nombre);
        printf("Precio: %.2f\n",articulos[i].precio);
        printf("Proveedor: %s %s\n",articulos[i].unProveedor.apellido, articulos[i].unProveedor.nombre);
        printf("\n");
    }
}

void mayorPrecio (Articulo articulos[], int size){
    if(size == 0) return;
    float mayor = articulos[0].precio;
    int indiceMayor = 0;
    for (int i = 1; i < size; i++){
        if (articulos[i].precio > mayor){
            mayor = articulos[i].precio;
            indiceMayor = i;
        }
    }
    printf("El precio mayor es: %.2f\n", mayor);
    printf("Clave: %d\n", articulos[indiceMayor].clave);
    printf("Nombre: %s\n", articulos[indiceMayor].nombre);
}

void buscarArticulo (Articulo articulos[], int size, int clave){
    for(int i = 0; i < size; i++){
        if(articulos[i].clave == clave){
            printf("Articulo encontrado:\n");
            printf("Clave: %d\n",articulos[i].clave);
            printf("Nombre: %s\n",articulos[i].nombre);
            printf("Precio: %.2f\n",articulos[i].precio);
            printf("Proveedor: %s %s\n",articulos[i].unProveedor.apellido, articulos[i].unProveedor.nombre);
            return;
        }
    }
    printf("Articulo con clave %d no encontrado.\n", clave);
}