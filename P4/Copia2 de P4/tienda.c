#include <stdio.h>
#include "articulo.h"
#include "menu.h"

int main() {
   int opcion;
   Articulo articulos[3];
   int claveBuscar;

     
   do {
      opcion = desplegarMenu ("1)Capturar articulos\n2)Listar\n3)Articulo con mayor precio\n4)Buscar un articulo por clave\n5)Salir\nOpcion:",5);
      switch (opcion) {
        case 1://capturar
                capturarArticulos(articulos, 3);
             break;
        case 2://listar
          listarArticulos(articulos, 3);
             break;
        case 3://mayor precio
          mayorPrecio(articulos, 3);
             break;
        case 4://buscar por clave

             break;
         }
    }while (opcion !=5);
  return 0;
}
