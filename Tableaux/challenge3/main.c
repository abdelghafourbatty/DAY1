#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,I;
    float S;
    printf("le nombre d elements\n");
    scanf("%d",&A);
    float table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%f",&table[I]);
    }
    S = 0;
    for(I=0;I<A;I++){
        S = S + table[I];
    }
        printf("Somme des elements %.2f\n",S);



    return 0;
}
