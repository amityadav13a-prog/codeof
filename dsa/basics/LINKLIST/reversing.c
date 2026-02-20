#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the linked list
struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current =head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;  // Store next node
        current->next = prev;  // Reverse current node's pointer
        prev = current;        // Move prev forward
        current = next;        // Move current forward
    }

    return prev;  // New head of the reversed list
}


struct Node* insert(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    head = insert(head, 4);
    head = insert(head, 3);
    head = insert(head, 2);
    head = insert(head, 1);

    printf("Original List:\n");
    printList(head);

    head = reverse(head);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}
