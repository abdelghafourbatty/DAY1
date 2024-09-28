#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longeur,largeur,aire,perimetre;
    printf("enter longeur\n");
    scanf("%f",&longeur);
    printf("enter largeur\n");
    scanf("%f",&largeur);
    printf("longeur is %.f\n",longeur);
    printf("largeur is %.f\n",largeur);
    aire = longeur * largeur;
    printf("aire is %.f\n",aire);
    perimetre = 2 * (longeur + largeur);
    printf("perimetre is %.f\n",perimetre);

    return 0;
}
