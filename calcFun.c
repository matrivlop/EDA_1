#include <stdio.h>
// Prototipos
void sumar();
void restar (float num1, float num2);
float multiplicar ();
float dividir (float num1, float num2);
int main(){ 
    int opcion;
    float num1, num2, resultado;
    do{
        printf("\n1)Sumar\n2)Restar\n3)Multiplicar\n4)Dividir\n5)Salir\nOpcion:");
        scanf("%d", &opcion);
        switch (opcion)
        {
            case 1:
                sumar();
                break;
            case 2:
                printf("Numero1: ");
                scanf("%f", &num1);
                printf("Numero2: ");
                scanf("%f", &num2);
                restar(num1, num2);
                break;
            case 3:
                resultado = multiplicar();
                printf("La multiplicacion es: %.2f", resultado);
                break;
            case 4:
                printf("num1: ");
                scanf("%f", &num1);
                printf("num2: ");
                scanf("%f", &num2);
                resultado = dividir(num1, num2);
                printf("La division es: %.2f", resultado);
                break;
            case 5:
                printf("Saliendo...");
                break;
            default:
                printf("Opcion no valida");
                break;
        }
    } while(opcion != 5);
    return 0;
}
// Cuerpo de las funciones
void sumar (){
    float num1, num2;
    printf("Numero1: ");
    scanf("%f", &num1);
    printf("Numero2: ");
    scanf("%f", &num2);
    printf("La suma es: %.2f", num1 + num2);
}
void restar (float num1, float num2){
    printf("La resta es: %.2f", num1 - num2);
}
float multiplicar (){
    float num1, num2, resultado;
    printf("Numero1: ");
    scanf("%f", &num1);
    printf("Numero2: ");
    scanf("%f", &num2);
    resultado = num1 * num2;
    return resultado;
}
float dividir (float num1, float num2){
    float resultado;
    if (num2 == 0){
        printf("Error: No se puede dividir entre cero.\n");
        return 0;
    } else {
        resultado = num1 / num2;
        return resultado;
    }
}
