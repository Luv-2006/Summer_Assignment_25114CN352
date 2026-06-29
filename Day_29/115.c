#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n===== String Menu =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                int i;
                printf("Reversed String: ");

                for(i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);

                printf("\n");
                break;
            }

            case 3: {
                int i;

                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                }

                printf("Uppercase String: %s\n", str);
                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}
