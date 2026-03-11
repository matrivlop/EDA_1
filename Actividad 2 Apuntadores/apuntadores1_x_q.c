#include <stdio.h>

int main() {
    int x, *q;
    x= 10;
    q= &x;

    printf("\n   A P U N T A D O R E S\n");
    printf("==============================\n");
    printf("Si x = 10 y q = &x, entonces:\n\n");
    printf("\t&x =%i, x=%i\n", &x, x);
    printf("\t&q =%i, q=%i, *q= %i\n\n", &q, q, *q);

    return 0;
}
