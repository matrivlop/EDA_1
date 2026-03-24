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

void mayorPrecio (Articulo unArticulo2, int cantidad){
float mayor = unArticulo2.precio;
int indiceMayor = 0;
for (int i = 0; i < cantidad; i++){
    if (unArticulo2.precio > mayor){
        mayor = unArticulo2.precio;
        indiceMayor = i;
    }
}
printf("El precio mayor es: %.2f\n", mayor);
printf("Clave: %d\n", unArticulo2.clave);
printf("Nombre: %s\n", unArticulo2.nombre);
}