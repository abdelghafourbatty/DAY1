#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c = 0, i = 2;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    while (c < n) {
        printf("%d", i);
        i += 2;
        c++;
        printf("\n");
    }

    return 0;
}
