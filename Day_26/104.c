#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== C Quiz =====\n\n");

    printf("Q1. Who developed C language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ2. Which symbol ends a C statement?\n");
    printf("1. :\n2. ;\n3. ,\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ3. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
