#include <stdio.h>
int main (){
    int tabla, elemento;
    printf("\nTabla: ");
    scanf("%d", &tabla);
    while (tabla<=10){
        printf("\nTabla del: %d\n", tabla);
         elemento=1;
                while(elemento<=10){
            printf("\n%d * %d = %d\n", tabla, elemento, tabla*elemento);
            elemento++;
        }
        tabla++;
    }
    return 0;
}