#include <stdio.h>
#include <string.h>

struct Donor {
    char name[50];
    char blood[3];
    int age;
    int lastDonation;
};
// check eligibility 
int isEligible(int age, int months) {
    return (age >= 18 && months >= 3);
}

// check
int isCompatible(char donor[], char recipient[]) {
    if (strcmp(recipient, "O") == 0)
        return strcmp(donor, "O") == 0;

    if (strcmp(recipient, "A") == 0)
        return strcmp(donor, "A") == 0 || strcmp(donor, "O") == 0;

    if (strcmp(recipient, "B") == 0)
        return strcmp(donor, "B") == 0 || strcmp(donor, "O") == 0;

    if (strcmp(recipient, "AB") == 0)
        return 1;

    return 0;
}

// Add donor(s)
void addDonor() {
    struct Donor d;
    FILE *fp = fopen("donors.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char choice;

    do {
        printf("\nEnter name: ");
        scanf("%49s", d.name);

        printf("Enter blood group (A/B/AB/O): ");
        scanf("%2s", d.blood);

        printf("Enter age: ");
        scanf("%d", &d.age);

        printf("Months since last donation: ");
        scanf("%d", &d.lastDonation);

        fprintf(fp, "%s %s %d %d\n", d.name, d.blood, d.age, d.lastDonation);

        printf("Donor saved successfully!\n");

        printf("Do you want to add another donor? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
}

// Display donors
void displayDonors() {
    struct Donor d;
    FILE *fp = fopen("donors.txt", "r");

    if (fp == NULL) {
        printf("No donor data found.\n");
        return;
    }

    printf("\n--- All Donors ---\n");
    printf("Name\tBlood\tAge\tLast Donation\n");

    int count = 0;

    while (fscanf(fp, "%49s %2s %d %d",
                  d.name, d.blood, &d.age, &d.lastDonation) == 4) {

        printf("%s\t%s\t%d\t%d months\n",
               d.name, d.blood, d.age, d.lastDonation);

        count++;
    }

    if (count == 0) {
        printf("No valid donor data found.\n");
    }

    fclose(fp);
}

// Search donors
void searchDonor() {
    struct Donor d;
    char required[3];
    FILE *fp = fopen("donors.txt", "r");

    if (fp == NULL) {
        printf("No donor data found.\n");
        return;
    }

    printf("\nEnter required blood group: ");
    scanf("%2s", required);

    printf("\n--- Eligible & Compatible Donors ---\n");

    int found = 0;

    while (fscanf(fp, "%49s %2s %d %d",
                  d.name, d.blood, &d.age, &d.lastDonation) == 4) {

        if (isEligible(d.age, d.lastDonation) &&
            isCompatible(d.blood, required)) {

            printf("%s (%s, Age: %d, Last Donation: %d months)\n",
                   d.name, d.blood, d.age, d.lastDonation);

            found = 1;
        }
    }

    if (!found) {
        printf("No eligible donors found.\n");
    }

    fclose(fp);
}

// NEW: Clear all data
void clearData() {
    FILE *fp = fopen("donors.txt", "w"); // overwrite file

    if (fp == NULL) {
        printf("Error clearing data!\n");
        return;
    }

    fclose(fp);
    printf("All donor data cleared successfully!\n");
}
// main menu 
int main() {
    int choice;

    while (1) {
        printf("\n=== Blood Donor System ===\n");
        printf("1. Add Donor\n");
        printf("2. Display All Donors\n");
        printf("3. Search Compatible Donors\n");
        printf("4. Clear All Data\n");
        printf("5. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addDonor();
                break;

            case 2:
                displayDonors();
                break;

            case 3:
                searchDonor();
                break;

            case 4:
                clearData();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}