#include <stdio.h>
#include <stdlib.h>


int maximum(int A, int B){
    int max;
    if(A>B)
    max = A;
    else
    max = B;
    return max;

}

int main()
{
    int max;
    int A,B;
    printf("Enter first number\n");
    scanf("%d",&A);
    printf("Enter second number\n");
    scanf("%d",&B);
    max = maximum(A,B);
    printf("Maximum est %d\n",max);
    return 0;
}
