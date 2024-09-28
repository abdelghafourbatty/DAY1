#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,I,max;

    printf("le nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    max = table[0];
    for(I=1;I<A;I++){
       if(max<table[I])
        max = table[I];
    }
    printf("le Maximum is %d",max);


    return 0;
}
