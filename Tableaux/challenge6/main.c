#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,I;

    printf("le nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    printf("le facteur de multiplication\n",B);
    scanf("%d",&B);
    for(I=0;I<A;I++){
        table[I] = B * table[I];
        printf("le facteur %d\n",table[I]);
    }

    return 0;
}
