#include <stdio.h>
#include <stdlib.h>

/* �crivez un programme qui demande la temp�rature en Celsius et affiche l'�tat de l'eau � cette temp�rature (solide, liquide, gaz). R�gle */

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
