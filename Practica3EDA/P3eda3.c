#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 5
//PROTOTIPOS
void llenarArreglo(int *q);
void imprimirArreglo(int *q);
void imprimirArregloInverso(int *q);
void clonarArreglo(int *origen, int *destino);
int main(){
    //VARIABLES LOCALES
    int arreglo1[MAX];
    int arreglo2[MAX];
    llenarArreglo(arreglo1);
    printf("\nArreglo original generado:");
    imprimirArreglo(arreglo1);
    
    clonarArreglo(arreglo1, arreglo2);
    printf("\nArreglo clonado:\n");
    imprimirArreglo(arreglo2);
    
    imprimirArregloInverso(arreglo1);
    printf("\n");
    system("pause");
    return 0;
}
//DEFINICION DE LAS FUNCIONES
void llenarArreglo(int *q){
    printf("\nLLenando el arreglo...\n");
    srand(time(NULL));
    int *p = q;
    for(int i=0; i<MAX; i++){
        *p = rand()%100+1;
        p++;
    }
}
void imprimirArreglo(int *q){
    printf("\nArreglo:\t");
    int *p = q;
    for(int i=0; i<MAX; i++){
        printf("%i\t", *p);
        p++;
    }
    printf("\n");
}
void imprimirArregloInverso(int *q){
    printf("\nArreglo inverso:\t");
    int *p = q + (MAX - 1); // apuntador al último elemento
    for(int i=0; i<MAX; i++){
        printf("%i\t", *p);
        p--;   // retrocede con el apuntador para imprimir en orden inverso
    }
    printf("\n");
}
void clonarArreglo(int *origen, int *destino){
    int *p = origen;
    int *q = destino;
    for(int i = 0; i < MAX; i++){
        *q = *p;
        p++;
        q++;
    }
}