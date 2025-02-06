// purpose : automatic reciept genereator



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateReceipt() {
    FILE *receipt;
    char item[50];
    int quantity;
    float price, total = 0, grandTotal = 0;
    time_t t;
    time(&t);

    receipt = fopen("L_69_receipt.txt", "w");
    if (receipt == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(receipt, "=====================================\n");
    fprintf(receipt, "         Automated Receipt\n");
    fprintf(receipt, "=====================================\n");
    fprintf(receipt, "Date & Time: %s", ctime(&t));
    fprintf(receipt, "-------------------------------------\n");
    fprintf(receipt, "%-20s %-10s %-10s\n", "Item", "Qty", "Price");
    fprintf(receipt, "-------------------------------------\n");

    while (1) {
        printf("Enter item name (or 'done' to finish): ");
        scanf("%s", item);
        if (strcmp(item, "done") == 0)
            break;

        printf("Enter quantity: ");
        scanf("%d", &quantity);
        printf("Enter price per unit: ");
        scanf("%f", &price);

        total = quantity * price;
        grandTotal += total;

        fprintf(receipt, "%-20s %-10d %-10.2f\n", item, quantity, total);
    }

    fprintf(receipt, "-------------------------------------\n");
    fprintf(receipt, "Total Amount: %.2f\n", grandTotal);
    fprintf(receipt, "=====================================\n");
    fprintf(receipt, "   Thank You for Your Purchase!\n");
    fprintf(receipt, "=====================================\n");

    fclose(receipt);
    printf("\nReceipt generated successfully!\nCheck 'receipt.txt'\n");
}

int main() {
    generateReceipt();
    return 0;
}