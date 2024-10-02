#include <stdio.h>
#include <stdlib.h>


#define MAX_BOOKS 100

//global variables section
char Nom[MAX_BOOKS][100];
char Prenom[MAX_BOOKS][100];
char Telephone[MAX_BOOKS][100];
char Statu[MAX_BOOKS][100];
char Date[MAX_BOOKS][100];
int Age[MAX_BOOKS];
char searchreservation[100];
int i, found;
int bookCount = 0;
int choice;
// fonctions section
void choice_fon();
void newreservation();
void Modifiereservation();
void supprimerreservation();
void affichereservation();

int main()
{
    do{
      choice_fon();
      system("cls");
      switch(choice){
          case 1:
                newreservation();
                system("cls");
                printf("reservation added successfully!\n");
                break;
          case 2:
                Modifiereservation();
                system("cls");
                printf("reservation updated!\n");
                break;
         case 3:
                supprimerreservation();
                system("cls");
                printf("reservation deleted successfully!\n");
                break;
        case 4:
                system("cls");
                affichereservation();
                break;



      }

    }while(choice !=8);

    return 0;
}
// fonctions

// fonctionq of choice

void choice_fon()
{
    printf("Systeme de Gestion de reservation\n");
        printf("1. Ajouter une reservation\n");
        printf("2. Modifier une reservation\n");
        printf("3. Supprimer une réservation\n");
        printf("4. Afficher les details dune reservation\n");
        printf("5. Tri des reservations\n");
        printf("6. Recherche des reservations\n");
        printf("7. Statistiques\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
}

// fonction of reservation
void newreservation(){
    system ("cls");

                if (bookCount < MAX_BOOKS) {
                    printf("Enter name: ");
                    scanf("%s", Nom[bookCount]);
                    printf("Enter prenom: ");
                    scanf("%s", Prenom[bookCount]);
                    printf("Enter phone number: ");
                    scanf("%s", Telephone[bookCount]);
                    printf("Enter your age: ");
                    scanf("%d", &Age[bookCount]);
                    printf("Enter statu: ");
                    scanf("%s", Statu[bookCount]);
                    printf("Enter date: ");
                    scanf("%s", Date[bookCount]);
                    bookCount++;
                } else
                    printf("Stock is full.\n");
}

// fonction of modifier
void Modifiereservation(){
 printf("Enter phone number of the reservation you wanna update: ");
            scanf("%s", searchreservation);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (Telephone[i][0] == searchreservation[0]) {
            printf("Enter name: ");
            scanf("%s", Nom[i]);
            printf("Enter prenom: ");
            scanf("%s", Prenom[i]);
            printf("Enter phone number: ");
            scanf("%s", Telephone[i]);
            printf("Enter your age: ");
            scanf("%d", &Age[i]);
            printf("Enter statu: ");
            scanf("%s", Statu[i]);
            printf("Enter date: ");
            scanf("%s", Date[i]);
            found = 1;
                }
            }
            if (!found)
                printf("phone number not found.\n");

}

void supprimerreservation(){

printf("Enter phone number of the reservation you want to delete: ");
            scanf("%s", searchreservation);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (Telephone[i][0] == searchreservation[0]) {
                    Nom[i][0] = Nom[bookCount - 1][0];
                    Prenom[i][0] = Prenom[bookCount - 1][0];
                    Telephone[i][0] = Telephone[bookCount - 1][0];
                    Statu[i][0] = Statu[bookCount - 1][0];
                    Date[i][0] = Date[bookCount - 1][0];
                    Age[i] = Age[bookCount - 1];
                    bookCount--;
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("reservation not found.\n");
}
void affichereservation(){
   if (bookCount == 0) {
                printf("No reservation available.\n");
            } else
                for (i = 0; i < bookCount; i++) {
                    printf("Nome : %s, prenome : %s, phone number : %s, age : %d, status : %s, date : %s\n",
                           Nom[i], Prenom[i], Telephone[i],Age, Statu[i],Date[i]);
                }

}
