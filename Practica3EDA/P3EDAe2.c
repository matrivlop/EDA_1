#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 5
//PROTOTIPOS
void llenarArreglo(int *q);
void imprimirArreglo(int *q);
void imprimirArregloInverso(int *q);
int main(){
    //VARIABLE LOCAL
    int arreglo[MAX];
    llenarArreglo(arreglo);
    imprimirArreglo(arreglo);
    imprimirArregloInverso(arreglo);
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