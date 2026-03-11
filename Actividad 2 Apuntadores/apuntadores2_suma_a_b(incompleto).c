#include <stdio.h>
#include <stdlib.h>

int main () {
  int x,y, resultado;
   //declarar los apuntadores
  int *a,*b;

  printf("valor1: ");
  scanf("%i", &x);
  printf("valor2: ");
  scanf("%i", &y);

  //inicializar los apuntadores
  a = &x;
  b = &y;
  resultado = *a + *b;

  printf ("%d + %d = %d",*a,*b,resultado);
  printf("\n\nla direccion x= %d y su contenido =%d",&x,x);
  printf("\nla direccion y= %d y su contenido =%d",&y,y);
  printf("\nla direccion a= %d ,su contenido =%d, su valor al que apunta es %d",&a,a,*a );
  printf("\nla direccion b= %d,su contenido =%d,su valor al que apunta es %d", &b,b,*b);
  system("pause");
  return 0;
}
