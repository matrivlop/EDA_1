#include <stdio.h>
int main(){
    int elemento, tabla;
    printf("Tabla: ");
    scanf("%d", &tabla);
    
    for (tabla=tabla;tabla>=1;tabla--){
printf("\nTabla del %d\n",tabla);
    for (elemento=10;elemento>=1;elemento--){
        printf("\n%d * %d = %d\n", tabla, elemento, tabla*elemento);
    }
}
    return 0;
}