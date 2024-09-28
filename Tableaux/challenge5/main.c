#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,I,mini;

    printf("le nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    mini = table[0];
    for(I=1;I<A;I++){
       if(mini>table[I])
        mini = table[I];
    }
    printf("le Minimum is %d",mini);


    return 0;
}
