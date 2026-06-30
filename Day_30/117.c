#include <stdio.h>

struct Room {
    int roomNo;
    int booked;
};

int main() {
    struct Room room[5];
    int i, choice, roomNo;

    for(i = 0; i < 5; i++) {
        room[i].roomNo = i + 1;
        room[i].booked = 0;
    }

    do {
        printf("\n===== HOTEL MANAGEMENT =====\n");
        printf("1. View Rooms\n");
        printf("2. Book Room\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nRoom Status:\n");
            for(i = 0; i < 5; i++) {
                printf("Room %d : %s\n",
                       room[i].roomNo,
                       room[i].booked ? "Booked" : "Available");
            }
            break;

        case 2:
            printf("Enter Room Number (1-5): ");
            scanf("%d", &roomNo);

            if(roomNo >= 1 && roomNo <= 5) {
                if(room[roomNo - 1].booked == 0) {
                    room[roomNo - 1].booked = 1;
                    printf("Room Booked Successfully.\n");
                } else {
                    printf("Room Already Booked.\n");
                }
            } else {
                printf("Invalid Room Number.\n");
            }
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
