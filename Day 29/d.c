#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item it[100];
    int n = 0, choice, i;

    do {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Quantity\n");
        printf("5. Calculate Total Value\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &it[n].id);

                printf("Enter Item Name: ");
                scanf("%s", it[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &it[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &it[n].price);

                n++;
                printf("Item added successfully!\n");
                break;

            case 2:
                printf("\n----- INVENTORY LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                           it[i].id, it[i].name, it[i].quantity, it[i].price);
                }
                break;

            case 3: {
                int id, found = 0;
                printf("Enter Item ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (it[i].id == id) {
                        printf("Item Found!\n");
                        printf("ID: %d | Name: %s | Qty: %d | Price: %.2f\n",
                               it[i].id, it[i].name, it[i].quantity, it[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item not found.\n");
                break;
            }

            case 4: {
                int id, found = 0, qty;

                printf("Enter Item ID to update quantity: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (it[i].id == id) {
                        printf("Enter new quantity: ");
                        scanf("%d", &qty);
                        it[i].quantity = qty;
                        printf("Quantity updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Item not found.\n");
                break;
            }

            case 5: {
                float total = 0;

                for (i = 0; i < n; i++) {
                    total += it[i].quantity * it[i].price;
                }

                printf("Total Inventory Value = %.2f\n", total);
                break;
            }

            case 6:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}