#include <stdio.h>
#include <stdlib.h>
/* �crivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, pr�nom, �ge, sexe, et adresse email. Les donn�es sont saisies � partir du clavier.
*/

int main()
{
    char nom[20],prenom[20];
    int age;
    char sexe[20],address_email[50];

    printf("enter your first name\n");
    scanf("%s",&nom);
    printf("enter your last name\n");
    scanf("%s",&prenom);
    printf("enter your age\n");
    scanf("%d",&age);
    printf("enter your sexe\n");
    scanf("%s",&sexe);
    printf("enter your address email\n");
    scanf("%s",&address_email);
    printf("your first name is %s and last name is %s \n",nom,prenom);
    printf("your age is %d and your sexe is %s \n",age,sexe);
    printf("your adress email is %s \n",address_email);



    return 0;
}
