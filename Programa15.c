#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("Tamanio de un char: %d \n",sizeof(char));
printf("Tamanio de un int: %d\n",sizeof(int));
printf("Tamanio de un long int: %d\n",sizeof(long int));
printf("Tamanio de un long long int: %d\n",sizeof(long long int));
printf("Tamanio de un float: %d\n",sizeof(float));
printf("Tamanio de un double: %d \n",sizeof(double));
printf("Tamanio de un void *: %d \n",sizeof(void *));
return 0;
}