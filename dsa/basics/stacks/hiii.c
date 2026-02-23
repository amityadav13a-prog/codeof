#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Peek function
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Display function
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();
    return 0;
}