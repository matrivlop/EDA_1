#include <stdio.h>
int main(){
    int elemento, tabla;
    printf("Tabla: ");
    scanf("%d", &tabla);
    
    for (tabla=tabla;tabla<=10;tabla++){
printf("\nTabla del %d\n",tabla);
    elemento=1;
    for (elemento=elemento;elemento<=10;elemento++){
        printf("\n%d * %d = %d\n", tabla, elemento, tabla*elemento);
    }
}
    return 0;
}