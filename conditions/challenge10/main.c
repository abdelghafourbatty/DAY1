#include <stdio.h>
#include <string.h>

int main() {
    int jour, mois, annee;
    char* moisNom;

    printf("Entrez une date au format jj/mm/aaaa : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);

    switch (mois) {
        case 1:  moisNom = "Janvier";   break;
        case 2:  moisNom = "Février";   break;
        case 3:  moisNom = "Mars";      break;
        case 4:  moisNom = "Avril";     break;
        case 5:  moisNom = "Mai";       break;
        case 6:  moisNom = "Juin";      break;
        case 7:  moisNom = "Juillet";   break;
        case 8:  moisNom = "Août";      break;
        case 9:  moisNom = "Septembre"; break;
        case 10: moisNom = "Octobre";   break;
        case 11: moisNom = "Novembre";  break;
        case 12: moisNom = "Décembre";  break;
        default: moisNom = "Invalide";  break;
    }
    printf("%d-%s-%d\n", jour, moisNom, annee);

    return 0;
}
