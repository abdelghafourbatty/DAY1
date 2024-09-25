#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    a = 0;
    printf("enter a number\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        a = a + i ;
    }
    c = a ;
    printf("la somme is %d",c);
    return 0;
}
