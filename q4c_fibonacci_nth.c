/*
 * CCS 2214 - Data Structures and Algorithms (Task 3)
 * Question 4(c): Recursive program to find the Nth term of a Fibonacci series
 */

#include <stdio.h>

int fibonacciTerm(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciTerm(n - 1) + fibonacciTerm(n - 2);
}

int main() {
    int n;
    printf("Enter term position N (0-indexed): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid term position.\n");
    } else {
        printf("Term %d of Fibonacci series = %d\n", n, fibonacciTerm(n));
    }

    return 0;
}
