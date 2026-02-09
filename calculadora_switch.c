#include <stdio.h>
int main (){
    float num1;
    float num2;
    float resultado;
    int opcion;
do{
    printf("1)Sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n5)Salir\nOpcion: ");
    scanf("%d", &opcion);
    if (opcion >= 1 && opcion <= 4){
        printf("Numero 1: ");
        scanf("%f", &num1);
        printf("Numero 2: ");
        scanf("%f", &num2);
    }
    switch (opcion) {
case 1: 
resultado = num1 + num2;
printf("la suma de %.2f + %.2f = %.2f\n", num1, num2, resultado);
break;

case 2: 
resultado = num1 - num2;
printf("la resta de %.2f - %.2f = %.2f\n", num1, num2, resultado);
break;

case 3:
resultado = num1*num2;
printf("El producto de %.2f * %.2f = %.2f\n", num1, num2, resultado);
break;

case 4:
if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("El cociente de %.2f / %.2f = %.2f\n", num1, num2, resultado);
                } else {
                    printf("Error: No se puede dividir entre cero\n");
                }
                break;

                case 5: 
                printf("Salieno de la calculadora\n");
                break;

                default:
                printf("intenta de nuevo\n");
                break;

    }
   
}while (opcion !=5);
return 0;

}