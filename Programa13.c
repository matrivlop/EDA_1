#include <stdio.h>
//Programa 13: Imprimir pares con do-while
int main(){
    int inicio=2;
    int final;
printf ("¿Hasta qué numero quieres los pares?\n");
scanf("%d", &final);
printf("\nPares:\n");
do{
    printf("%d\n", inicio);
    inicio +=2;
}while (inicio <= final);
return 0;
}