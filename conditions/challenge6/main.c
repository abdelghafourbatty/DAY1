#include <stdio.h>
#include <stdlib.h>
/* Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro */

int main()
{
    int a;
    printf("enter number:\n");
    scanf("%d",&a);
    if(a<0)
        printf("this number is negative\n");
    else if(a>0)
        printf("this number is positive\n");
    else
        printf("this number is nul");
    return 0;
}
