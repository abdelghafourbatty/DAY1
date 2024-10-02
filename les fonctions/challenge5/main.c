#include <stdio.h>
#include <stdlib.h>

int Factorielle(int A, int B){
    int P;
    P = A * B;
    return P;

}

int main()
{
    int A,B,P;
    printf("Enter number\n");
    scanf("%d",&A);
    printf("Enter Factorielle\n");
    scanf("%d",&B);
    P = Factorielle(A,B);
    printf("Factorielle est %d\n",P);
    return 0;
}
