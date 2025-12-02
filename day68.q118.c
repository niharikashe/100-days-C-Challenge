Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0, total;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n, n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Calculate actual sum
    }
    total = n * (n + 1) / 2;
    printf("The missing number is: %d\n", total - sum);

    return 0;
}
