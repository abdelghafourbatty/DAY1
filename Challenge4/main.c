#include <stdio.h>
#include <stdlib.h>
/* �crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s). Formule : */

int main()
{
    float km_h,m_s;
    printf("enter la vitesse en kilometres par heure\n");
    scanf("%f",&km_h);
    m_s = km_h * 0.27778;
    printf("metres par seconde %.4f",m_s);

    return 0;
}
