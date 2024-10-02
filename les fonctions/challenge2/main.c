#include <stdio.h>
#include <stdlib.h>

int Multiplication(int N, int A){
    int P;
    P = N * A;
    return P;

}

int main()
{
    int N,A,P;
    printf("Enter first number\n");
    scanf("%d",&N);
    printf("Enter second number\n");
    scanf("%d",&A);
    P = Multiplication(N,A);
    printf("Multiplication est %d\n",P);
    return 0;
}
