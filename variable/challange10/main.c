#include <stdio.h>
#include <stdlib.h>
/* Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de l'utilisateur */

int main()
{
    const Pi = 3.14;
    float r,Volume;
    printf("le rayon de la sphere\n");
    scanf("%f",&r);
    Volume = (4/3) * Pi * pow(r,3);
    printf("le Volume %.2f\n",Volume);
    return 0;
}
