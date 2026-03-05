#include <stdio.h>
#include "funciones.h"
//La linea 2 es para incluir el archivo de encabezado que contiene las declaraciones de las funciones y variables globales utilizadas en este programa.
int main(){
    //VARIABLES LOCALES
    int dato, pos, opcion;
    indice = -1; //inicializamos el indice en -1 para indicar que el arreglo esta vacio

    do {
        printf("\nARREGLOS\n===================\n");
        printf("1)Insertar\n2)Listar\n3)Buscar\n4)Actualizar\n5)Borrar\n6)Salir\nOpcion:");
        scanf("%d",&opcion);
        switch (opcion) {
        case 1: //INSERTAR
                if ( validarEspacio() !=0 )    //si regresa 0 => falso, caso contrario => verdadero
                {
                    printf("\nDame un numero: ");
                    scanf("%d",&dato);
                    insertar(dato);
                }
                else
                    printf("No hay espacio en el arreglo\n");
            break;
        case 2: //LISTAR
                listar();
            break;
       case 3: //BUSCAR
                printf("\nDame el numero a buscar: ");
                scanf("%d",&dato);
                pos = buscar(dato);
                if (pos != -1)
                    printf("El dato esta en la casilla %d\n",pos );
            break;
            
        case 4: //ACTUALIZAR
                printf("\nDame el numero a actualizar: ");
                scanf("%d",&dato);
                pos = buscar(dato); //LA FUNCION BUSCAR REALIZA EL CICLO
                if (pos != -1){
                    printf("\nDame el nuevo dato: ");
                    scanf("%d", &dato);
                    actualizar(pos, dato);
                }
            break;
            
        case 5: // BORRAR
                printf("\nDame el numero a borrar: ");
                scanf("%d", &dato);
                pos = buscar(dato); //LA FUNCION BUSCAR REALIZA EL CICLO
                if (pos != -1){
                    int datoEliminado = borrar(pos);
                    printf("El dato %d fue eliminado con exito!!\n", datoEliminado);
                }
            break;
        }
   } while ( opcion != 6);
    return 0;
}
