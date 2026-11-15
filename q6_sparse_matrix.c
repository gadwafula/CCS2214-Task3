/*
 * CCS 2214 - Data Structures and Algorithms (Task 3)
 * Question 6: Program to represent a sparse matrix using arrays
 */

#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {0, 0, 3, 0},
        {0, 0, 5, 7},
        {0, 0, 0, 0},
        {0, 2, 0, 0}
    };

    int nonZeroCount = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }

    // 3-tuple array: [Row, Column, Value]
    int sparse[nonZeroCount + 1][3];
    sparse[0][0] = 4;
    sparse[0][1] = 4;
    sparse[0][2] = nonZeroCount;

    int k = 1;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("Sparse Matrix Representation (Triplet Form):\n");
    printf("Row\tCol\tValue\n");
    for (int i = 0; i <= nonZeroCount; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
