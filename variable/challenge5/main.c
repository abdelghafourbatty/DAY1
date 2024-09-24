#include <stdio.h>
#include <stdlib.h>

/* Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle */

int main()
{
    float C;
    printf("enter la temperature en Celsius \n");
    scanf("%f",&C);
    if(C<0)
        printf("temperature solide");
    else if(0<=C && C<=100)
     printf("temperature liqiude");
     else if(C>100)
     printf("temperature gaz");

    return 0;
}
