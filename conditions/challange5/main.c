#include <stdio.h>
#include <stdlib.h>
/* Écrivez un programme C piloté par menu pour convertir une année donnée */



int main() {
    const DAYS_IN_YEAR = 365;
    const HOURS_IN_DAY = 24;
    const MINUTES_IN_HOUR = 60;
    const SECONDS_IN_MINUTE = 60;
    int years;

    printf("Entrez le nombre annee : ");
    scanf("%d", &years);

        printf("convertir annee en mois = %d\n",years * 12);
        printf("convertir annee en jours = %d\n",years * DAYS_IN_YEAR);
        printf("convertir annee en heures = %d\n",years * DAYS_IN_YEAR * HOURS_IN_DAY);
        printf("convertir annee en minutes = %d\n",years * DAYS_IN_YEAR * HOURS_IN_DAY * MINUTES_IN_HOUR);
        printf("convertir annee en secondes = %d\n",years * DAYS_IN_YEAR * HOURS_IN_DAY * MINUTES_IN_HOUR * SECONDS_IN_MINUTE);



    return 0;
}
