/* 1. pedir 2 números al usuario y sumarlos, multiplicarlos, restarlos y dividirlos.*/
#include <stdio.h>
int main(){
    float Num1;
    float Num2;
    float resultado;
    printf("Ingrese dos numeros:");
    scanf("%f %f", &Num1, &Num2);
    printf("\nLa suma de %.2f + %.2f = %.2f\n", Num1, Num2, resultado= Num1+Num2);
    printf("\nLa resta de %.2f - %.2f = %.2f\n", Num1, Num2, resultado= Num1-Num2);
    printf("\nEl producto de %.2f * %.2f = %.2f\n", Num1, Num2, resultado= Num1*Num2);
    printf("\nEl cociente de  %.2f / %.2f = %.2f\n", Num1, Num2, resultado= Num1/Num2);
    return 0;
}