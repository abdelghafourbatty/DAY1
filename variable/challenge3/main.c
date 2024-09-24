#include <stdio.h>
#include <stdlib.h>
/* Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule : */

int main()
{
    float Km,Yards;
    printf("enter la distance en kilometres\n");
    scanf("%f",&Km);
    Yards = Km * 1093.61;
    printf("Yards is %.2f",Yards);
    return 0;
}
