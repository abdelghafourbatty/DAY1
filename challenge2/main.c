#include <stdio.h>
#include <stdlib.h>
/* �crivez un programme qui demande la temp�rature en Celsius et la transforme en Kelvin. Formule : */
int main()
{
    float K,C;
    printf("enter en celsius\n");
    scanf("%f",&C);
    K = C + 273.15;
    printf("kelvin is %.2f",K);
    return 0;
}
