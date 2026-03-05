// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* top = NULL;

// void push(int x) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = x;
//     newNode->next = top;
//     top = newNode;
// }

// void pop() {
//     if(top == NULL) {
//         printf("Stack is empty\n");
//         return;
//     }
//     struct Node* temp = top;
//     printf("Popped: %d\n", top->data);
//     top = top->next;
//     free(temp);
// }

// int main() {
//     push(10);
//     push(20);
//     pop();
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coef;
    int exp;
    struct Node* next;
};

struct Node* createNode(int c, int e) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coef = c;
    newNode->exp = e;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* head) {
    while(head != NULL) {
        printf("%dx^%d", head->coef, head->exp);
        if(head->next != NULL)
            printf(" + ");
        head = head->next;
    }
}

int main() {
    struct Node* poly = NULL;
    struct Node* temp;

    poly = createNode(5,3);
    poly->next = createNode(4,2);
    poly->next->next = createNode(2,1);
    poly->next->next->next = createNode(7,0);

    printf("Polynomial: ");
    display(poly);

    return 0;
}