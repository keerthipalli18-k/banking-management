#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure (Node)
struct Account {
    int accNo;
    char name[50];
    float balance;
    struct Account *next;
};

struct Account *head = NULL;

// CREATE (Add Node)
void addNode() {
    struct Account *newNode = (struct Account*)malloc(sizeof(struct Account));

    printf("Enter Account Number: ");
    scanf("%d", &newNode->accNo);

    printf("Enter Name: ");
    scanf("%s", newNode->name);

    printf("Enter Balance: ");
    scanf("%f", &newNode->balance);

    newNode->next = head;
    head = newNode;

    printf("✅ Record Added Successfully!\n");
}

// READ (Display)
void display() {
    struct Account *temp = head;

    if (temp == NULL) {
        printf("❌ No records found!\n");
        return;
    }

    printf("\n--- Account Records ---\n");
    while (temp != NULL) {
        printf("\nAccount No: %d", temp->accNo);
        printf("\nName: %s", temp->name);
        printf("\nBalance: %.2f\n", temp->balance);
        temp = temp->next;
    }
}

// SEARCH
void search() {
    int accNo;
    printf("Enter Account Number to Search: ");
    scanf("%d", &accNo);

    struct Account *temp = head;

    while (temp != NULL) {
        if (temp->accNo == accNo) {
            printf("\n✅ Record Found!");
            printf("\nAccount No: %d", temp->accNo);
            printf("\nName: %s", temp->name);
            printf("\nBalance: %.2f\n", temp->balance);
            return;
        }
        temp = temp->next;
    }

    printf("❌ Record Not Found!\n");
}

// UPDATE
void updateNode() {
    int accNo;
    printf("Enter Account Number to Update: ");
    scanf("%d", &accNo);

    struct Account *temp = head;

    while (temp != NULL) {
        if (temp->accNo == accNo) {
            printf("Enter New Name: ");
            scanf("%s", temp->name);

            printf("Enter New Balance: ");
            scanf("%f", &temp->balance);

            printf("✅ Record Updated Successfully!\n");
            return;
        }
        temp = temp->next;
    }

    printf("❌ Record Not Found!\n");
}

// DELETE
void deleteNode() {
    int accNo;
    printf("Enter Account Number to Delete: ");
    scanf("%d", &accNo);

    struct Account *temp = head, *prev = NULL;

    while (temp != NULL) {
        if (temp->accNo == accNo) {
            if (prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;

            free(temp);
            printf("✅ Record Deleted Successfully!\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("❌ Record Not Found!\n");
}

// MAIN FUNCTION (Menu Driven)
int main() {
    int choice;

    while (1) {
        printf("\n====== MENU ======\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addNode(); break;
            case 2: deleteNode(); break;
            case 3: updateNode(); break;
            case 4: search(); break;
            case 5: display(); break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("❌ Invalid choice!\n");
        }
    }

    return 0;
}