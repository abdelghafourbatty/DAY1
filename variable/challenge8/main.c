#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Écrivez un programme en C pour trouver la moyenne géométrique de trois nombres saisis par l'utilisateur */

int main()
{
    float m_g,a,b,c;

    printf("enter A\n");
    scanf("%f",&a);
    printf("enter b\n");
    scanf("%f",&b);
    printf("enter c\n");
    scanf("%f",&c);
    /* La fonction pow(base, exponent) */
    m_g = pow(a * b * c, 1.0 / 3.0);
    printf("moyenne geomtrique %.2f",m_g);


    return 0;
}
