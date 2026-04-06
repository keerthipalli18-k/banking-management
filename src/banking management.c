#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for FILE (no pointer)
struct FileAccount {
    int accNo;
    char name[50];
    float balance;
};

// Linked List Node
struct Account {
    int accNo;
    char name[50];
    float balance;
    struct Account *next;
};

struct Account *head = NULL;

// SAVE TO FILE
void saveToFile() {
    FILE *fp = fopen("accounts.dat", "wb");
    struct Account *temp = head;
    struct FileAccount fa;

    if (fp == NULL) {
        printf("File Error!\n");
        return;
    }

    while (temp != NULL) {
        fa.accNo = temp->accNo;
        strcpy(fa.name, temp->name);
        fa.balance = temp->balance;

        fwrite(&fa, sizeof(fa), 1, fp);
        temp = temp->next;
    }

    fclose(fp);
}

// LOAD FROM FILE
void loadFromFile() {
    FILE *fp = fopen("accounts.dat", "rb");
    if (fp == NULL) return;

    struct FileAccount fa;
    struct Account *newNode;

    while (fread(&fa, sizeof(fa), 1, fp)) {
        newNode = (struct Account*)malloc(sizeof(struct Account));

        newNode->accNo = fa.accNo;
        strcpy(newNode->name, fa.name);
        newNode->balance = fa.balance;

        newNode->next = head;
        head = newNode;
    }

    fclose(fp);
}

// ADD
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

    saveToFile();

    printf("✅ Record Added Successfully!\n");
}

// DISPLAY
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

            saveToFile();

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
            saveToFile();

            printf("✅ Record Deleted Successfully!\n");
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    printf("❌ Record Not Found!\n");
}

// FREE MEMORY
void freeList() {
    struct Account *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// MAIN
int main() {
    int choice;

    loadFromFile(); // load data when program starts

    while (1) {
        printf("\n====== BANKING SYSTEM ======\n");
        printf("1. Add Account\n");
        printf("2. Delete Account\n");
        printf("3. Update Account\n");
        printf("4. Search Account\n");
        printf("5. Display All\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addNode(); break;
            case 2: deleteNode(); break;
            case 3: updateNode(); break;
            case 4: search(); break;
            case 5: display(); break;
            case 6:
                freeList();
                printf("Thank You!\n");
                exit(0);
            default:
                printf("❌ Invalid Choice!\n");
        }
    }

    return 0;
}
  


 
