#include <stdio.h>
#include <stdlib.h>
/* Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale */

int main()
{
    int a,b,c;
    printf("enter A\n");
    scanf("%d",&a);
    printf("enter B\n");
    scanf("%d",&b);
    c = a+b;
    printf("A + B = %d\n",c);
    c = a-b;
    printf("A - B = %d\n",c);
    c = a*b;
    printf("A * B = %d\n",c);
    c = a/b;
    printf("A / B = %d\n",c);
    return 0;
}
