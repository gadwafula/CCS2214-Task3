/*
 * CCS 2214 - Data Structures and Algorithms (Task 3)
 * Question 1: Implementation of Circular Queue in C
 */

#include <stdio.h>

#define MAX 5

int cqueue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % MAX == front) {
        printf("Queue Overflow: Cannot insert %d\n", val);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    cqueue[rear] = val;
    printf("Enqueued: %d\n", val);
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow: Queue is empty\n");
        return;
    }
    printf("Dequeued: %d\n", cqueue[front]);
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Circular Queue is empty.\n");
        return;
    }
    printf("Circular Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", cqueue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    enqueue(40);
    enqueue(50);
    enqueue(60); // Wraps around to index 0
    display();

    return 0;
}
