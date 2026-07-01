#include <stdio.h>
#include <string.h>

struct Ticket {
    int id;
    char name[50];
    int seats;
    float price;
};

int main() {
    struct Ticket t[100];
    int n = 0, choice, i;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Booking\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Booking ID: ");
                scanf("%d", &t[n].id);

                printf("Enter Customer Name: ");
                scanf("%s", t[n].name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t[n].seats);

                t[n].price = t[n].seats * 200; // fixed ticket price

                n++;
                printf("Ticket booked successfully!\n");
                break;

            case 2:
                printf("\n----- BOOKING DETAILS -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Seats: %d | Price: %.2f\n",
                           t[i].id, t[i].name, t[i].seats, t[i].price);
                }
                break;

            case 3: {
                int id, found = 0;
                printf("Enter Booking ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (t[i].id == id) {
                        printf("Booking Found!\n");
                        printf("ID: %d | Name: %s | Seats: %d | Price: %.2f\n",
                               t[i].id, t[i].name, t[i].seats, t[i].price);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Booking not found.\n");
                break;
            }

            case 4: {
                int id, found = 0;

                printf("Enter Booking ID to cancel: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (t[i].id == id) {
                        // shift records left
                        for (int j = i; j < n - 1; j++) {
                            t[j] = t[j + 1];
                        }
                        n--;
                        printf("Booking cancelled successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Booking not found.\n");
                break;
            }

            case 5:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}