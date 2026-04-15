#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Node structure for Book
struct Book {
    char title[100];
    char author[100];
    struct Book* next;
};

// Create linked list of books
struct Book* createList(int n) {
    struct Book *head = NULL, *temp = NULL, *newNode;

    for(int i = 0; i < n; i++) {
        newNode = (struct Book*)malloc(sizeof(struct Book));

        printf("\nEnter book title: ");
        scanf(" %[^\n]", newNode->title);

        printf("Enter author name: ");
        scanf(" %[^\n]", newNode->author);

        newNode->next = NULL;

        if(head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Recursive function to count books
int countBooks(struct Book* head) {
    if(head == NULL)
        return 0;
    return 1 + countBooks(head->next);
}

// Display books
void display(struct Book* head) {
    struct Book* temp = head;

    printf("\nBook List:\n");
    while(temp != NULL) {
        printf("Title: %s | Author: %s\n", temp->title, temp->author);
        temp = temp->next;
    }
}

// Main function
int main() {
    int n;
    struct Book* head;

    printf("Enter number of books: ");
    scanf("%d", &n);

    head = createList(n);

    display(head);

    int total = countBooks(head);
    printf("\nTotal number of books = %d\n", total);

    return 0;
}