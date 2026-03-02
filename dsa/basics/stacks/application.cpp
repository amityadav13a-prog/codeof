#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    // Push operation
    bool push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return false;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }

    // Pop operation
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    // Peek operation
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    cout << s.pop() << " popped from stack\n";
    cout << s.pop() << " popped from stack\n";

    return 0;
}