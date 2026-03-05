//Prototipos
#include <stdio.h>
void leerDatos(int x, int y);
void cambiarValores(int *a, int *b, int c);

int main(){
    //variables locales
    int x, y, a, b, c;
    x = 10;
    y = 5;
    a = 2;
    b = 4;
    c = 6;
    leerDatos(x, y);
    cambiarValores(&a, &b, c);
    printf("Los nuevos valores son: x=%d, y=%d, a=%d, b=%d, c=%d\n", x, y, a, b, c);
    return 0;
}
void leerDatos(int x, int y){
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);
}
void cambiarValores(int *a, int *b, int c){
    *a=100;
    *b=200;
    c=300;
}