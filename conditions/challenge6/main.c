#include <stdio.h>
#include <stdlib.h>
/* �crivez un programme pour v�rifier si le nombre donn� est positif, n�gatif ou nul. Si le nombre est inf�rieur � z�ro, alors le nombre est n�gatif et si le nombre est sup�rieur � z�ro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est �gal � z�ro */

int main()
{
    int a;
    printf("enter number:\n");
    scanf("%d",&a);
    if(a<0)
        printf("this number is negative\n");
    else if(a>0)
        printf("this number is positive\n");
    else
        printf("this number is nul");
    return 0;
}
