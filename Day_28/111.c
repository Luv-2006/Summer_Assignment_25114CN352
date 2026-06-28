#include <stdio.h>

int main() {
    int seats = 10;
    int choice, tickets;

    do {
        printf("\n===== Ticket Booking =====\n");
        printf("Available Seats: %d\n", seats);

        printf("1. Book Ticket\n");
        printf("2. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &tickets);

                if(tickets <= seats) {
                    seats -= tickets;
                    printf("Booking Successful!\n");
                    printf("Remaining Seats: %d\n", seats);
                }
                else {
                    printf("Not Enough Seats Available.\n");
                }
                break;

            case 2:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 2);

    return 0;
}
