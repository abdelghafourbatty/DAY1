#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c = 0, i = 2;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    if(n%2==0){
    while (c < n) {
        printf("%d", i);
        i += 2;
        c++;
    }
    }
    else
        printf("enter nombre pair");

    return 0;
}
