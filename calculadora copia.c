#include <stdio.h>
int main ()
{
    float num1;
    float num2;
    float resultado;
    int opcion;
   printf("1)Sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n5)Salir\nOpcion: ");
   scanf("%d", &opcion);
   if (opcion== 1 ){
printf("numero 1: ");
scanf("%f",&num1);
printf("numero 2: ");
scanf("%f", &num2);
resultado = num1+num2;
printf("la suma de %.2f + %.2f = %.2f\n", num1, num2, resultado);
   }
   else if (opcion==2){
printf("numero 1: ");
scanf("%f",&num1);
printf("numero 2: ");
scanf("%f", &num2);
resultado = num1-num2;
printf("la resta de %.2f - %.2f = %.2f\n", num1, num2, resultado);
   }
   else if (opcion==3){
printf("numero 1: ");
scanf("%f",&num1);
printf("numero 2: ");
scanf("%f", &num2);
resultado = num1*num2;
printf("El producto de %.2f * %.2f = %.2f\n", num1, num2, resultado);
   }
   else if (opcion==4){
printf("numero 1: ");
scanf("%f",&num1);
printf("numero 2: ");
scanf("%f", &num2);
if (num2>0||num2<0){
resultado = num1/num2;
printf("El cociente de %.2f / %.2f = %.2f\n", num1, num2, resultado);
}
if (num2==0){
    printf("Error %c\n");
   }
   else if (opcion==5){
    return 0;
   }
}
}

