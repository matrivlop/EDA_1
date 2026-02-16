#include <stdio.h>

int main (){

    int elemento_i, elemento_f, tabla_i, tabla_f, tabla;

    printf("Ingrese tabla inicial y tabla final: ");
    scanf("%d %d", &tabla_i, &tabla_f);

    printf("Ingrese elemento inicial y final: ");
    scanf("%d %d", &elemento_i, &elemento_f);

    tabla = tabla_f;

    while(tabla >= tabla_i){

        printf("\nTabla del %d\n", tabla);

        for (int elemento = elemento_f; elemento >= elemento_i; elemento--){
            printf("%d * %d = %d\n", tabla, elemento, tabla * elemento);
        }

        tabla--;
    }

    return 0;
}
