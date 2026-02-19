/*Construir en C un arreglo A de tamaño 10, otro B de tamaño 10 y un tercero C de tamaño 10.
1) llenar los datos del arreglo A con un ciclo for.
2) llenar los datos del arreglo B con un ciuclo while.
3)Llenar los datos del arreglo C sumando A y B y guardar el resultado en C.
4) Listar los 3 arreglos con un ciclo for.*/
#include <stdio.h>
int main()
{
    int A[10], B[10], C[10];
    int i = 0;
    printf("Llenar el arreglo A:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese el valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    printf("\nLlenar el arreglo B:\n");
    i = 0;
    while (i < 10)
    {
        printf("Ingrese el valor para B[%d]: ", i);
        scanf("%d", &B[i]);
        i++;
    }
    printf("\nLlenar el arreglo C sumando A y B:\n");
    for (i = 0; i < 10; i++)
    {
        C[i] = A[i] + B[i];
    }
    printf("\nLista de los 3 arreglos:\n");
    for (i = 0; i < 10; i++)
    {
        printf("A[%d] = %d, B[%d] = %d, C[%d] = %d\n", i, A[i], i, B[i], i, C[i]);
    }
    return 0;
}