#include <stdio.h>
#include <stdlib.h>
/* �crivez un programme pour trouver le volume d'une sph�re. Prenez le rayon de la sph�re en entr�e de l'utilisateur */

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
