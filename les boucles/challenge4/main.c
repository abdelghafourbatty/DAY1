#include <stdio.h>

int main() {
    int n, c = 0, i = 1;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    while (c < n) {
        printf("%d ", i);
        i += 2;
        c++;
    }

    return 0;
}
