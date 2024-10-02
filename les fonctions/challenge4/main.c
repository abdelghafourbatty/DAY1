#include <stdio.h>
#include <stdlib.h>

int minimum(int A, int B){
    int min;
    if(A>B)
    min = B;
    else
    min = A;
    return min;

}

int main()
{
    int min;
    int A,B;
    printf("Enter first number\n");
    scanf("%d",&A);
    printf("Enter second number\n");
    scanf("%d",&B);
    min = minimum(A,B);
    printf("Minimum est %d\n",min);
    return 0;
}
