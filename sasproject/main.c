#include <stdio.h>
#include <stdlib.h>


#define MAX_BOOKS 100

//global variables section
char Nom[MAX_BOOKS][100];
char Prenom[MAX_BOOKS][100];
char Telephone[MAX_BOOKS][100];
char Statu[MAX_BOOKS][100];
char Date[MAX_BOOKS][100];
int Age[100];
char searchreservation[100];
int referencech[100];
int reference[100];
int i,found,n,j,choiceT;
int bookCount = 0;
int choice;
char temp[100];
// fonctions section
void choice_fon();
void newreservation();
void Modifiereservation();
void supprimerreservation();
void affichereservation();
void trireservation();
void recherchereservation();
void Statistiquesres();

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
        case 5:
                system("cls");
                trireservation();
                break;
        case 6:
                system("cls");
                recherchereservation();
                break;
        case 7:
                system("cls");
                Statistiquesres();
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
        printf("3. Supprimer une reservation\n");
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
                    printf("Entrez le statut (valide, reporte, annule, traite) : ");
                    scanf("%s", Statu[bookCount]);
                    printf("Enter date: ");
                    scanf("%s", Date[bookCount]);
                    printf("%d",reference[bookCount] =bookCount+1);
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

// fonction of supprimer
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

// fonction of afficheir
void affichereservation(){
   if (bookCount == 0) {
                printf("No reservation available\n");
            } else
                for (i = 0; i < bookCount; i++) {
                    printf("Nome : %s, prenome : %s, phone number : %s, age : %d, status : %s, date : %s, reference : %d\n",
                           Nom[i], Prenom[i], Telephone[i],Age[i], Statu[i],Date[i],reference[i]);
                }

}

// fonction of tri
void trireservation(){
 system("cls");
    int choiceT;
    int j;

    printf("1. Tri des reservations par Nom\n");
    printf("2. Tri des reservations par statut (valide, reporte, annule, traite).\n");
    do {
        printf("enter your choice: "); scanf("%d", &choiceT);

        if(choiceT == 1){
                for (i= 0; i < bookCount; i++){
        for (j = i + 1; j < bookCount; j++) {
            if (strcmp(Nom[i], Nom[j]) > 0) {
                strcpy(temp, Nom[i]);
                strcpy(Nom[i], Nom[j]);
                strcpy(Nom[j], temp);
            }
        }
                }
             for (i = 0; i < bookCount; i++)
                    printf("Nome : %s, prenome : %s, phone number : %s, age : %d, status : %s, date : %s\n",
                           Nom[i], Prenom[i], Telephone[i],Age, Statu[i],Date[i]);
        }
}while(choiceT!=1 && choiceT!=2);
}
// fonction of recherche
void recherchereservation(){

system("cls");
    int choice;
    printf("1. recherche par Nom\n");
    printf("2. recherche par reference unique\n");
    do {
        printf("enter your choice: "); scanf("%d", &choice);

        if(choice == 1){
        printf("Enter the name of the reservation: ");
            scanf("%s", searchreservation);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (Nom[i][0] == searchreservation[0]) {
                    printf("Nome : %s, prenome : %s, phone number : %s, age : %d, status : %s, date : %s\n",
                           Nom[i], Prenom[i], Telephone[i],Age, Statu[i],Date[i]);
                    found = 1;
                    break;
                }
            }
        }else if(choice == 2){
            printf("Enter the name of the reservation: ");
            scanf("%d",&referencech);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (reference[i] == referencech[0]) {
                    printf("Nome : %s, prenome : %s, phone number : %s, age : %d, status : %s, date : %s, reference : %d\n",
                           Nom[i], Prenom[i], Telephone[i],Age[i], Statu[i],Date[i],reference[i]);
                    found = 1;
                    break;
                }
            }
}
           if (!found)
                printf("reservation not found.\n");


}while(choice!=1 && choice!=2);


}
// fonction of statistiques
void Statistiquesres(){
int sum = 0;
int avg = 0;
int counter[3];
int choice;
    printf("1. Calculer la moyenne d age des patients ayant reserve\n");
    printf("2. Afficher le nombre de patients par tranche d age\n");
    printf("3. Generer des statistiques pour connaître le nombre total de reservations par statut\n");
    do {
        printf("enter your choice: "); scanf("%d", &choice);

        if(choice == 1){
            for (i = 0; i < bookCount; i++) {
             sum += Age[i];
            }
            avg = sum / bookCount ;
            printf(" la moyenne d age des patients ayant reserve %d\n",avg);
        }else if(choice == 2){
            for (i = 0; i < bookCount; i++) {
                    if(Age[i]>0 && Age[i]<=18)
                    counter[0]++;
                    else if(Age[i]>=19 && Age[i]<=35)
                    counter[1]++;
                    else if(Age[i]>=36 )
                    counter[2]++;
            }
            printf("  0-18 ans : %d , 19-35 ans : %d , 36+ ans : %d\n",counter[0],counter[1],counter[2]);
        }else if(choice == 3){
        }

}while(choice!=1 && choice!=2 && choice!=3);
}

