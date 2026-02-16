#include <stdio.h>
int main()
{
    char x;
    char y;
    while (1)
    {
        printf("Dame un numero: ");
        scanf("%d",&x);
        y = x+100;
        printf("%d + 100 = %d\n",x, y);
        y = x-100;
        printf("%d - 100 = %d\n",x, y);
        printf("Que inteligentes somos las computadoras!\n");
    }
}