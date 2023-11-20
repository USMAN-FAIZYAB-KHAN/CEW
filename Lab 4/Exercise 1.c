// Write a program that simulates a simple address book. Define a structure to store contact
// information (name, email, phone number). Allow the user to add new contacts to the
// address book dynamically. Use dynamic memory allocation for storing the contacts using
// malloc and update the memory allocation using realloc when adding new contacts.
// Implement an option to delete a contact and free the memory. Ensure that memory is
// properly managed throughout the program's execution.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Contact
{
    char name[30];
    char phone[30];
    char email[30];
};

int main() {
    int n = 0;
    struct Contact *addressBook = (struct Contact *) malloc(n * sizeof(struct Contact));
    while (1) {
        printf("1. Add a new contact\n");
        printf("2. Delete a contact\n");
        printf("3. Display contacts\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        int choice;
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                n++;
                addressBook = realloc(addressBook, n * sizeof(struct Contact));
                if (addressBook == NULL) {
                    printf("Memory allocation failed!\n");
                    return 1;
                }
                struct Contact newContact;
                printf("Enter a new contact\n");
                printf("Enter name: ");
                scanf("%s", newContact.name);
                printf("Enter phone: ");
                scanf("%s", newContact.phone);
                printf("Enter email: ");
                scanf("%s", newContact.email);
                addressBook[n - 1] = newContact;
                break;
            case 2:
                char name[30];
                printf("Delete a contact\n");
                printf("Enter name to search: ");
                scanf("%s", name);
                int index = -1;
                for (int i = 0; i < n; i++) {
                    if (strcmp(addressBook[i].name, name) == 0) {
                        index = i;
                        for (int j = i; j < n - 1; j++) {
                            addressBook[j] = addressBook[j + 1];
                        }
                        n--;
                        addressBook = realloc(addressBook, n * sizeof(struct Contact));
                        printf("Deleted!\n");
                        break;
                    }
                }
                if (index == -1) {
                    printf("Not found!\n");
                }
                break;
            case 3:
                if (n == 0) {
                    printf("No contact!\n");
                    break;
                }
                for (int i=0; i<n; i++) {
                    printf("Contact %d\n", i+1);
                    printf("Name: %s\n", addressBook[i].name);
                    printf("Phone: %s\n", addressBook[i].phone);
                    printf("Email: %s\n", addressBook[i].email);
                }
                break;
            case 4:
                free(addressBook);
                return 0;
}}}
