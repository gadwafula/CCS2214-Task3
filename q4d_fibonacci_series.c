/*
 * CCS 2214 - Data Structures and Algorithms (Task 3)
 * Question 4(d): Recursive program to generate N terms of a Fibonacci series
 */

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter number of terms N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Enter a positive number of terms.\n");
    } else {
        printf("Fibonacci Series (%d terms): ", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
