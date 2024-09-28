#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("enter un nombre premier\n");
    scanf("%d",&A);
    do{
        if(A%2==0)
        printf("c est pas un nombre premier");
        else
             printf("c est un nombre premier");
    }while(A % A-1 == 0);

    return 0;
}
