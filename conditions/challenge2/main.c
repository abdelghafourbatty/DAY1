#include <stdio.h>
#include <stdlib.h>
/* Écrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme */

int main()
{
    int a,b,c,d;
    printf("enter A\n");
    scanf("%d",&a);
    printf("enter B\n");
    scanf("%d",&b);
    if(a==b){
    c = (a+b) * 3;
    printf("%d",c);}
    else{
    d = a+b;
    printf("%d",d);
    }

    return 0;
}
