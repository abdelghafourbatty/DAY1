#include <stdio.h>

int main() {
    int n, c = 0, i = 1;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    if(n%2 !=0){
    while (c < n) {
        printf("%d ", i);
        i += 2;
        c++;
    }
    }
    else
        printf("enter nombres impairs");

    return 0;
}
