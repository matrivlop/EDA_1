#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    printf("Ingrese el tamaño de los arreglos: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("El tamaño debe ser mayor que 0.\n");
        return 1;
    }
    int A[n], B[n], C[n];
//Arreglo A
    printf("\nLlenar el arreglo A:\n");
    for (i = 0; i < n; i++) //Ciclo for para llenar el arreglo A
    {
        printf("Ingrese el valor para A[%d]: ", i);
        scanf("%d", &A[i]);
    }
//Arreglo B
    printf("\nLlenar el arreglo B:\n");
    i = 0;
    while (i < n) //Ciclo while para llenar el arreglo B
    {
        printf("Ingrese el valor para B[%d]: ", i);
        scanf("%d", &B[i]);
        i++;
    }
//Arreglo C
    printf("\nLlenar el arreglo C sumando A y B:\n");
    for (i = 0; i < n; i++) //Ciclo for para llenar el arreglo C sumando A y B
    {
        C[i] = A[i] + B[i];
    }
//Listado de arreglos
    printf("\nLista de los 3 arreglos:\n");
    for (i = 0; i < n; i++) //Listado de los 3 arreglos usando un ciclo for
    {
        printf("A[%d] = %d, B[%d] = %d, C[%d] = %d\n", 
               i, A[i], i, B[i], i, C[i]);
    }
    return 0;
}
