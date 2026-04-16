#include <stdio.h>
#include <stdlib.h>
#include "pilaLSE.h"
#include "menu.h"


int main(){
    int dato;
    Pila *pilaLSE;
    int opcion;

    pilaLSE=crearPila(); //Regresa la pila creada dinamicamente e inicializada, tope = NULL
    if (pilaLSE == NULL)
        return 1;
    do {
        printf("OPERACIONES SOBRE PILAS\n");
        opcion = desplegarMenu("\n\t1)Push \n\t2)Pop\n\t3)Listar\n\t4)dato de la cima\n\t5)inicializar\n\t6)Salir\n\n  Opcion: ",6);
        switch (opcion){
            case 1:
                    printf("Ingrese un numero: ");
                    scanf("%i",&dato);
                    push(pilaLSE , dato); //No lleva & porque push recibe un puntero a pila
                    listar(*pilaLSE);
                break;

            case 2: if (!pilaVacia(*pilaLSE)){
                        dato = pop(pilaLSE);
                        printf("El dato eliminado fue: %i \n", dato);
                        listar(*pilaLSE);
                    }
                    else
                        printf("\nNo hay datos en la pila....\n");
                break;

            case 3: listar(*pilaLSE);
                break;
            case 4: if (!pilaVacia(*pilaLSE)){
                        dato = obtenerDatoTope(*pilaLSE);
                        printf("El dato de la cima es: %i \n", dato);
                    }
                    else
                        printf("\nNo hay datos en la pila....\n");
                    break;
            case 5: inicializarPila(pilaLSE);
                    listar(*pilaLSE);
                    break;
        }
    } while (opcion !=6);
  return 0;
}
