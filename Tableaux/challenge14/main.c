#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,I;
    float S,M;
    printf("le nombre d elements\n");
    scanf("%d",&A);
    float table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%f",&table[I]);
    }
    S = 0 ;
    for(I=0;I<A;I++){
        S = S + table[I];
        M = S / A;
    }
        printf("la moyenne is %.2f\n",M);



    return 0;
}
