#include <stdio.h>
#include <stdlib.h>
#include "pilaLSE.h"

Pila *crearPila(){
    Pila *nuevaPila;
    //CREACION DE LA PILA
    nuevaPila=(Pila *)malloc(1*sizeof(Pila));
    if (nuevaPila == NULL){
        printf("\nError: Espacio insuficiente para crear la pila...");
        return NULL;
    }
    //INICIALIZACION
    nuevaPila->tope= NULL;
    return nuevaPila;
}

void push(Pila *pila, int dato){
    Nodo *nuevo;
    if (pila != NULL){
        //1.SE CREA EL NUEVO NODO
        nuevo = (Nodo *)malloc(1 * sizeof(Nodo));
        if (nuevo == NULL){
            printf("Error: memoria insuficiente...");
            return;
        }
        //2.SE ALMACENA LA INFORMACI�N (inicializa el NODO)
        nuevo->info = dato;
        nuevo->sig = pila->tope; //EL NUEVO NODO APUNTA AL TOPE ACTUAL

        //3.SE INSERTA el nodo EN LA PILA
        pila->tope = nuevo;
    }
    else
        printf("Error: La pila no existe...");
}
void listar(Pila pila){
    Nodo *q;
    q=pila.tope;
    if (!pilaVacia(pila)){
        while(q!=NULL){
            printf("%i\n",q->info);
            q = q->sig;
        }
    }
    else
        printf("No hay datos en la pila...");
    printf("\n");
}

void inicializarPila(Pila *pila){
    Nodo *q=pila->tope;
    while (q!= NULL ){
        pila->tope = pila->tope->sig ; //AVANZA tope
        free( q ); //LIBERA LA MEMORIA
        q=pila->tope; //AVANZA q
    }
    printf("Pila vacia...");
}

int obtenerDatoTope(Pila pila){
    return pila.tope->info;
}

int pilaVacia(Pila pila){
    return pila.tope== NULL ;
}

int pop (Pila *pila){
    int dato = pila->tope->info ; //EXTRAE LA INFORMACIN
    Nodo *q = pila->tope;
    pila->tope= pila->tope->sig;
    free(q); //LIBERA LA MEMORIA
    return dato;
}


