#include <stdio.h>
#include <stdlib.h>

int parite(int A){
    int P;
    if(A%2==0)
        P = 1;
    else
        P = 0;

    return P;

}

int main()
{
    int A,P;
    printf("Enter number\n");
    scanf("%d",&A);
    P = parite(A);
    if(P==1)
    printf("number %d est pair\n",A);
    else
    printf("number %d est impair\n",A);
    return 0;
}
