
#include <stdio.h>

#define MAX_BOOKS 100

char titles[MAX_BOOKS][100];
char authors[MAX_BOOKS][100];
float prices[MAX_BOOKS];
int quantities[MAX_BOOKS];
int bookCount = 0;
int choice;
int i, found, total;
char searchTitle[100];

int main() {
    do {
        // Display menu
        printf("\nLibrary Stock Management System\n");
        printf("1. Add a Book\n");
        printf("2. Display All Books\n");
        printf("3. Search for a Book\n");
        printf("4. Update Book Quantity\n");
        printf("5. Delete a Book\n");
        printf("6. Show Total Stock\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Add a book
        if (choice == 1) {
            do {
                if (bookCount < MAX_BOOKS) {
                    printf("Book Title: ");
                    scanf("%s", titles[bookCount]);
                    printf("Book Author: ");
                    scanf("%s", authors[bookCount]);
                    printf("Book Price: ");
                    scanf("%f", &prices[bookCount]);
                    printf("Quantity: ");
                    scanf("%d", &quantities[bookCount]);
                    bookCount++;
                    printf("Book added successfully!\n");

                    // Ask if the user wants to add another book
                    char addMore;
                    printf("Do you want to add another book? (y/n): ");
                    scanf(" %c", &addMore);
                    if (addMore != 'y' && addMore != 'Y') {
                        break;  // Exit the loop if the user does not want to add more books
                    }
                } else {
                    printf("Stock is full.\n");
                    break;  // Exit the loop if the stock is full
                }
            } while (1);  // Infinite loop until the user decides to stop
        }
        // Display all books
        else if (choice == 2) {
            if (bookCount == 0) {
                printf("No books available.\n");
            } else {
                for (i = 0; i < bookCount; i++) {
                    printf("Title: %s, Author: %s, Price: %.2f, Quantity: %d\n",
                           titles[i], authors[i], prices[i], quantities[i]);
                }
            }
        }
        // Search for a book
        else if (choice == 3) {
            printf("Enter the title of the book to search: ");
            scanf("%s", searchTitle);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (titles[i][0] == searchTitle[0]) {  // Search by first letter
                    printf("Found: %s by %s, Price: %.2f, Quantity: %d\n",
                           titles[i], authors[i], prices[i], quantities[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found.\n");
            }
        }
        // Update book quantity
        else if (choice == 4) {
            printf("Enter the title of the book to update: ");
            scanf("%s", searchTitle);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (titles[i][0] == searchTitle[0]) {  // Search by first letter
                    printf("Enter the new quantity: ");
                    scanf("%d", &quantities[i]);
                    printf("Quantity updated!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found.\n");
            }
        }
        // Delete a book
        else if (choice == 5) {
            printf("Enter the title of the book to delete: ");
            scanf("%s", searchTitle);
            found = 0;
            for (i = 0; i < bookCount; i++) {
                if (titles[i][0] == searchTitle[0]) {  // Search by first letter
                    // Replace the deleted book with the last book
                    titles[i][0] = titles[bookCount - 1][0];
                    authors[i][0] = authors[bookCount - 1][0];
                    prices[i] = prices[bookCount - 1];
                    quantities[i] = quantities[bookCount - 1];

                    bookCount--;  // Reduce book count after deletion
                    printf("Book deleted successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Book not found.\n");
            }
        }
        // Show total stock
        else if (choice == 6) {
            total = 0;
            for (i = 0; i < bookCount; i++) {
                total += quantities[i];
            }
            printf("Total stock of books: %d\n", total);
        }
        // Exit the program
        else if (choice == 7) {
            printf("Thank you for using the system!\n");
        } else {
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
