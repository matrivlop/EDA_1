#include <stdio.h>
int main (){
    int tabla1, tabla2, elemento_i, elemento_f, n1, n2;
    printf("Ingrese la tabla inicial y final:\n");
    scanf("%d %d", &n1, &tabla2);
    printf("Infrese el elemento inicial y final:\n");
    scanf("%d %d", &n2, &elemento_f);
    for (tabla1=n1;tabla1<=tabla2;tabla1++){
        for(elemento_i=n2;elemento_i<=elemento_f;elemento_i++){
            printf("\n%d * %d = %d\n",tabla1, elemento_i, tabla1*elemento_i);
        }
    }
    return 0;
}