#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N ;
    int nbr;
    printf("Enter positif number\n");
    scanf("%d",&N);
    nbr = 0;
    if(N >0){
    do{
        N = N / 10;
        nbr++;
    }while(N > 0);
    printf("Nombre de chiffres %d",nbr);
    }
    else
        printf("enter number positive");
    return 0;
}
