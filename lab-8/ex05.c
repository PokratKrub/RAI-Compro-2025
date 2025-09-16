#include <stdio.h>

void sum_even_odd(int arr[], int n, int *even_sum, int *odd_sum) {
    *even_sum = 0;
    *odd_sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            *even_sum += arr[i];
        else
            *odd_sum += arr[i];
    }
}

int main() {
    int n;
    printf("N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%d", &arr[i]);
    }

    int even_sum, odd_sum;
    sum_even_odd(arr, n, &even_sum, &odd_sum);

    printf("Output: Sum of even number: %d\n", even_sum);
    printf("        Sum of odd number: %d\n", odd_sum);

    return 0;
}

