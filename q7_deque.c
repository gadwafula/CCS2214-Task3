/*
 * CCS 2214 - Data Structures and Algorithms (Task 3)
 * Question 7: C functions for Double-Ended Queue (Deque)
 */

#include <stdio.h>

#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

// a) Front insertion
void insertFront(int x) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front--;
    }
    deque[front] = x;
    printf("Inserted %d at front\n", x);
}

// b) Rear insertion
void insertRear(int x) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = x;
    printf("Inserted %d at rear\n", x);
}

// c) Front deletion
void deleteFront() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }
    printf("Deleted %d from front\n", deque[front]);
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

// d) Rear deletion
void deleteRear() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }
    printf("Deleted %d from rear\n", deque[rear]);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    deleteFront();
    deleteRear();
    return 0;
}
