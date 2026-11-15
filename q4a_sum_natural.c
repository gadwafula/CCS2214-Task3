/*
 * CCS 2214 - Data Structures and Algorithms (Task 3)
 * Question 4(a): Recursive program to find the sum of first N natural numbers
 */

#include <stdio.h>

int sumNatural(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Sum of first %d natural numbers = %d\n", n, sumNatural(n));
    }

    return 0;
}
