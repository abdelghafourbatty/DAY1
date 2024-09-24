#include <stdio.h>
#include <stdlib.h>

int main() {
    float moyenne;
    printf("Entrez la moyenne de l'élève : ");
    scanf("%f", &moyenne);
    if (moyenne < 10) {
        printf("Mention obtenue : Recale\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention obtenue : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention obtenue : Assez Bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention obtenue : Bien\n");
    } else {
        printf("Mention obtenue : Très Bien\n");
    }

    return 0;
}
