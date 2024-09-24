#include <stdio.h>
#include <stdlib.h>
/* ASCII (American Standard Code for Information Interchange) is a character encoding standard used to represent text in computers,
communication equipment, and other devices that use text. It was developed in the early 1960s and is one of the most widely used encoding systems */

int main() {
    char C;
    printf("Entrez un caractère : ");
    scanf("%c", &C);
    if (C >= 65 && C <= 90) {
        printf("%c est une lettre majuscule.\n", C);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", C);
    }

    return 0;
}

