#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a[100];
    int n = 0, choice, i;

    do {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &a[n].accNo);

                printf("Enter Name: ");
                scanf("%s", a[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &a[n].balance);

                n++;
                printf("Account created successfully!\n");
                break;

            case 2:
                printf("\n----- ACCOUNT LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("Acc No: %d | Name: %s | Balance: %.2f\n",
                           a[i].accNo, a[i].name, a[i].balance);
                }
                break;

            case 3: {
                int acc, found = 0;
                float amt;

                printf("Enter Account Number: ");
                scanf("%d", &acc);

                for (i = 0; i < n; i++) {
                    if (a[i].accNo == acc) {
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amt);

                        if (amt > 0) {
                            a[i].balance += amt;
                            printf("Amount deposited successfully!\n");
                        } else {
                            printf("Invalid amount!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;
            }

            case 4: {
                int acc, found = 0;
                float amt;

                printf("Enter Account Number: ");
                scanf("%d", &acc);

                for (i = 0; i < n; i++) {
                    if (a[i].accNo == acc) {
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amt);

                        if (amt > 0 && amt <= a[i].balance) {
                            a[i].balance -= amt;
                            printf("Please collect your cash.\n");
                        } else {
                            printf("Insufficient balance or invalid amount.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
                break;
            }

            case 5: {
                int acc, found = 0;

                printf("Enter Account Number to search: ");
                scanf("%d", &acc);

                for (i = 0; i < n; i++) {
                    if (a[i].accNo == acc) {
                        printf("Account Found!\n");
                        printf("Acc No: %d | Name: %s | Balance: %.2f\n",
                               a[i].accNo, a[i].name, a[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found.\n");
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