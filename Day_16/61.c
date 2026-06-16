#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, expectedSum;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing Number = %d", expectedSum - sum);

    return 0;
}
