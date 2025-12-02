Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one element will be repeated): ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int xor_all = 0;
    int xor_array = 0;

    for (i = 0; i < n; i++)
        xor_array ^= arr[i];

    for (i = 0; i < n - 1; i++)
        xor_all ^= i;

    int repeated = xor_all ^ xor_array;

    printf("The repeated element is: %d\n", repeated);

    return 0;
}
