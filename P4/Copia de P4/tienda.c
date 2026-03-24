#include <stdio.h>
#include "articulo.h"
#include "menu.h"

int main() {
   int opcion;
   Articulo articulos[10];
   int total = 0;
   int claveBuscada;
   int indice;

   do {
      opcion = desplegarMenu ("1)Capturar un articulo\n2)Listar\n3)Articulo con mayor precio\n4)Buscar un articulo por clave\n5)Salir\nOpcion:",5);
      switch (opcion) {
        case 1://capturar
            if (total < 10) {
                capturarArticulo(&articulos[total]);
                total++;
            } else {
                printf("Ya se capturaron los 10 articulos.\n");
            }
            break;
        case 2://listar
            listarArticulos(articulos, total);
            break;
        case 3://mayor precio
            mayorPrecio(articulos, total);
            break;
        case 4://buscar por clave    
         }
    } while (opcion != 5);
  return 0;
}
