#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,I,mini,max;

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
    max = table[0];
    for(I=1;I<A;I++){
       if(max<table[I])
        max = table[I];
    }
    printf("le Mini is %d\n",mini);
    printf("le Max is %d",max);
    return 0;
}
