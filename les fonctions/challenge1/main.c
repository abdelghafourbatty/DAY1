#include <stdio.h>
#include <stdlib.h>

int somme(int N, int A){
    int P;
    P = N + A;
    return P;

}

int main()
{
    int N,A,P;
    printf("Enter first number\n");
    scanf("%d",&N);
    printf("Enter second number\n");
    scanf("%d",&A);
    P = somme(N,A);
    printf("somme est %d\n",P);
    return 0;
}
