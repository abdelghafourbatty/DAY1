#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,I;

    printf("enter nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    printf("element you are looking for\n");
    scanf("%d",&B);

    C = 0 ;
    for(I=0;I<A;I++){
        if(table[I]==B)
        C++;
    }

    if(C==1)
        printf("l element %d present",B);
        else
        printf("l element %d non present",B);


    return 0;
}
