#include <stdio.h>

/* Function declarations */
void showMenu();
void addNumbers();
void reverseString();

int main() {
    int choice;

    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNumbers();
                break;
            case 2:
                reverseString();
                break;
            case 0:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
