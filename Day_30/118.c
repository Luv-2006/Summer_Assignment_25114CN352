#include <stdio.h>

int main() {
    int seats = 20;
    int choice, tickets;

    do {
        printf("\n===== BUS RESERVATION =====\n");
        printf("Available Seats: %d\n", seats);
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Number of Tickets: ");
            scanf("%d", &tickets);

            if(tickets <= seats) {
                seats -= tickets;
                printf("Booking Successful.\n");
            } else {
                printf("Not Enough Seats Available.\n");
            }
            break;

        case 2:
            printf("Available Seats = %d\n", seats);
            break;

        case 3:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice.\n");
        }

    } while(choice != 3);

    return 0;
}
