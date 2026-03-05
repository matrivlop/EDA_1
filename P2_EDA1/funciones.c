#include <stdio.h>
#include "funciones.h"
int arreglo[MAX];
int indice;

//FUNCIONES
void insertar(int dato){
    indice++;
    arreglo[indice] = dato;
}
int validarEspacio(){
    return (indice < MAX-1);
}
void listar(){
    int casilla;
    for(casilla = 0; casilla <= indice; casilla++)    {
        printf("[%d] = %d\t", casilla, arreglo[casilla]); /*imprime la casilla y el dato que contiene */
    }
    printf("\n");
}

/* Buscar regresa:el numero de casilla donde esta el dato,
 o bien un -1 para indicar que no existe el dato en el arreglo.
*/

int buscar(int dato){
    int casilla;
    for(casilla = 0; casilla <= indice; casilla++)    {
        if (arreglo[casilla]== dato)
            return casilla;  //si lo encontro
    }
    printf("\nNo existe el dato en el arreglo");
    return -1; // no se encontro
    
}
void actualizar(int pos, int datoNuevo){
    arreglo[pos]=datoNuevo;
}

int borrar(int pos){
    int aux = arreglo[pos];
    int i;
    for(i = pos; i < indice; i++){
        arreglo[i] = arreglo[i+1];
    }
    indice--;
    return aux;
}



