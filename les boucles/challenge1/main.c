#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,i;
    printf("enter a number\n");
    scanf("%d",&B);
    for(i=1;i<=10;i++){
        A = B*i;
        printf(" %d * %d = %d\n",B,i,A);
    }
    return 0;
}
