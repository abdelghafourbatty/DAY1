#include <stdio.h>
#include <stdlib.h>


#define MAX_BOOKS 100


//variables
char Nom[MAX_BOOKS][100];
char numero[MAX_BOOKS][100];
char address[MAX_BOOKS][100];
int choice;
int ContactCount = 0 ;
int i, found;
char searchcontact[100];
void choice_fun()
{
    printf("\nSysteme de Gestion de Contacts\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
}


int main()
{
     do {
        // Display menu
        choice_fun();
        getch();
        system("cls");


         if (choice == 1) {
            do {
                if (ContactCount < MAX_BOOKS) {
                    printf("Contact nom: ");
                    scanf("%s", Nom[ContactCount]);
                    printf("Numero de telephone: ");
                    scanf("%s", numero[ContactCount]);
                    printf("Adresse e-mail: ");
                    scanf("%s", &address[ContactCount]);
                    ContactCount++;
                    printf("contact added successfully!\n");
                    break;

                }
                else
                    printf("3aya9ti asahbi baghi dekhl kter men 100\n");
                    break;
            } while(1);
     }

     else if (choice == 2) {
            printf("Enter nom de contact: ");
            scanf("%s", searchcontact);
            found = 0;
            for (i = 0; i < ContactCount; i++) {
                if (Nom[i][0] == searchcontact[0]) {
                    printf("Enter the new number: ");
                    scanf("%s", &numero[i]);
                    printf("Enter the new address: ");
                    scanf("%s", &address[i]);
                    printf("contact updated!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("contact not found.\n");
            }
        }

         else if (choice == 3) {
            printf("Enter nome do contact you want to delete: ");
            scanf("%s", searchcontact);
            found = 0;
            for (i = 0; i < ContactCount; i++) {
                if (Nom[i][0] == searchcontact[0]) {
                    Nom[i][0] = Nom[ContactCount - 1][0];
                    numero[i][0] = numero[ContactCount - 1][0];
                    address[i][0] = address[ContactCount - 1][0];

                    ContactCount--;
                    printf("contact deleted successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("contact not found.\n");
            }
        }

  else if (choice == 4) {
            if (ContactCount == 0) {
                printf("No contact available.\n");
            } else {
                for (i = 0; i < ContactCount; i++) {
                    printf("nom: %s, number: %s, address: %s\n",
                           Nom[i], numero[i], address[i]);
                }
            }
        }

        else if (choice == 5) {
            printf("Enter the nom of contact: ");
            scanf("%s", searchcontact);
            found = 0;
            for (i = 0; i < ContactCount; i++) {
                if (Nom[i][0] == searchcontact[0]) {
                    printf("nom: %s, number: %s, adderss: %s\n",
                           Nom[i], numero[i], address[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("contact not found.\n");
            }
        }
          else if (choice == 6) {
            printf("Thank you for using the system!\n");
        } else {
            printf("Invalid choice, please try again.\n");
        }

     }while(choice != 6);
    return 0;
}
