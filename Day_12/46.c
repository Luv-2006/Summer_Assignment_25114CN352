#include <stdio.h>

int armstrong(int n) {
    int temp = n, sum = 0, digit;

    while(temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
