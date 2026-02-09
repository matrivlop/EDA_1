#include <stdio.h>
int main(){
    int tabla,i;
    printf("Tabla: ");
    scanf("%d", &tabla);
    i=1;
    while (i <= 10){
    printf("\n%d * %d = %d\n", tabla, i, tabla*i);
    i++;
    }
    
    return 0;
}