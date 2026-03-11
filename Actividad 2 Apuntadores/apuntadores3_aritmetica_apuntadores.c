#include <stdio.h>
#include <stdlib.h>

int main(){
    int v[]= {5,-1,0,2,8};
    int a=10, b=5, c=50,i, j;
    float x=2.0,y=4.2, z;
    int *p, *q, *w, *t;
    float *r;

    q= &c;
    w= q;
    c= a*b;
    t= v+4;

    for (i=0;i<5;i++)
        printf("(%d)[%d]=%d\t",&v[i],i,v[i]);
    printf("\n\n");

    printf("1)Para:   (t=v+4):       | t=%i | *t=%i\n", t, *t);
    t--;
    printf("\n2)Aplicando (t--):       | t=%i | *t=%i\n", t, *t);
    j = *t--;
    printf("\n3)Para (j= *t--) :   j= %d| t=%d | *t=%d\n", j,t, *t);
    j= *--t;
    printf("\n4)Para (j= *--t) :   j=%d| t=%d | *t=%d\n", j,t, *t);
    j=--*t;
    printf("\n5)Para (j= --*t) :   j=%d| t=%d | *t=%d | v[1] = %d\n", j,t, *t, v[1]);
    j=(*t)--;
    printf("\n6)Para (j= (*t)--) : j=%d| t=%d | *t=%d | v[1] = %d\n", j,t, *t, v[1]);
    printf("\n\n");

    for (i=0;i<5;i++)
        printf("(%d)[%d]=%d\t",&v[i],i,v[i]);
    printf("\n\n");

    system("pause");
    return 0;
}
