#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};
// struct node*revll(struct node*head){
//     struct node*prev=NULL;
//     struct node*current=head;
//     struct node*p=NULL;
//     while(current!=NULL){
//         p=current -> next;
//         current->next=prev;
//         prev=current;
//         current=p;
//     }
//     return prev;
// }
// struct Node* reverse(struct Node* head,int k) {
//     struct Node* prev = NULL;
//     struct Node* current =head;
//     struct Node* p= NULL;
//     int count=0;

    
    
//     while (current!= NULL&&count<k) {
//         p = current->next;  // Store next node
//         current->next = prev;  // Reverse current node's pointer
//         prev = current;        // Move prev forward
//         current = p;        // Move current forward
//         count++;
//     }

//     return prev;  // New head of the reversed list
// }
struct Node* Reverse(struct Node* head, int k) {
    if (head == NULL)
        return NULL;

    struct Node* current = head;
    struct Node* next = NULL;
    struct Node* prev = NULL;
    int count = 0;

    // Reverse first k nodes
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    // Recursively reverse remaining list
    if (next != NULL)
        head->next = Reverse(next, k);

    return prev;
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

    head = insert(head, 6);
    head = insert(head, 8);
    head = insert(head, 2);
    head = insert(head, 1);

    printf("Original List:\n");
    printList(head);

    head=reverse(head,2);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}



