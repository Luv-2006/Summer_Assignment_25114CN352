#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 0;
    }

    printf("Enter text to store in file: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Data written successfully.\n");

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("Cannot open file.");
        return 0;
    }

    fgets(text, sizeof(text), fp);

    printf("\nData from file:\n%s\n", text);

    fclose(fp);

    return 0;
}
