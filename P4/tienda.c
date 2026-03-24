#include <stdio.h>
#include "articulo.h"
#include "menu.h"

int main() {
   int opcion;
   Articulo miArticulo;
     
   do {
      opcion = desplegarMenu ("1)Capturar un articulo\n2)Listar\n3)Articulo con mayor precio\n4)Buscar un articulo por clave\n5)Salir\nOpcion:",5);
      switch (opcion) {
        case 1://capturar
                capturarArticulo(&miArticulo);
             break;
        case 2://listar
          listarArticulo(miArticulo);
             break;
        case 3://mayor precio
          mayorPrecio(miArticulo, 1);
             break;
        case 4://buscar por clave

             break;
         }
    }while (opcion !=5);
  return 0;
}
