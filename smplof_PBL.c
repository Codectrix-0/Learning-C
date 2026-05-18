#include <stdio.h>


struct Donation {
    char name[50];
    float amount;
    char purpose[100];
};

// Function to add donation
void addDonation() {
    FILE *fp;
    struct Donation d;

    fp = fopen("donations.doc", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter donor name: ");
    scanf(" %[^\n]", d.name);

    printf("Enter donation amount: ");
    scanf("%f", &d.amount);

    printf("Enter purpose: ");
    scanf(" %[^\n]", d.purpose);

    fprintf(fp, "%s %.2f %s\n", d.name, d.amount, d.purpose);
    fclose(fp);

    printf("Donation added successfully!\n");
}

// Function to view donations
void viewDonations() {
    FILE *fp;
    struct Donation d;

    fp = fopen("donations.doc", "r");
    if (fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("\n--- Donation Records ---\n");
    while (fscanf(fp, "%s %f %[^\n]", d.name, &d.amount, d.purpose) != EOF) {
        printf("Name: %s\nAmount: %.2f\nPurpose: %s\n\n",
               d.name, d.amount, d.purpose);
    }

    fclose(fp);
}

// Function to search donation by name
void searchDonation() {
    FILE *fp;
    struct Donation d;
    char searchName[50];
    int found = 0;

    fp = fopen("donations.doc", "r");
    if (fp == NULL) {
        printf("No records found!\n");
        return;
    }

    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);

    while (fscanf(fp, "%s %f %[^\n]", d.name, &d.amount, d.purpose) != EOF) {
        if (strcmp(d.name, searchName) == 0) {
            printf("\nRecord Found!\n");
            printf("Name: %s\nAmount: %.2f\nPurpose: %s\n",
                   d.name, d.amount, d.purpose);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No record found!\n");
    }

    fclose(fp);
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- Donation Management System ---\n");
        printf("1. Add Donation\n");
        printf("2. View Donations\n");
        printf("3. Search Donation\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addDonation();
                break;
            case 2:
                viewDonations();
                break;
            case 3:
                searchDonation();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
