#include <stdio.h>
#include <stdlib.h>
/* Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair */

int main()
{
    int number;
    printf("enter number\n");
    scanf("%d",&number);
    if(number%2 == 0)
        printf("number is paire");
    else
        printf("number is impair");
    return 0;
}
