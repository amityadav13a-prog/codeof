// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct node {
//     int emp_id;
//     char name[50], dept[50], desig[50];
//     float sal;
//     long phno;
//     struct node *prev, *next;
// };

// struct node *head = NULL;

// // Create new node
// struct node* createNode() {
//     struct node *newnode = (struct node*)malloc(sizeof(struct node));
//     printf("Enter Emp ID: ");
//     scanf("%d", &newnode->emp_id);
//     printf("Enter Name: ");
//     scanf("%s", newnode->name);
//     printf("Enter Dept: ");
//     scanf("%s", newnode->dept);
//     printf("Enter Designation: ");
//     scanf("%s", newnode->desig);
//     printf("Enter Salary: ");
//     scanf("%f", &newnode->sal);
//     printf("Enter Phone: ");
//     scanf("%ld", &newnode->phno);
//     newnode->prev = newnode->next = NULL;
//     return newnode;
// }

// // Insert at End
// void insertEnd() {
//     struct node *newnode = createNode();
//     if (head == NULL) {
//         head = newnode;
//         return;
//     }
//     struct node *temp = head;
//     while (temp->next != NULL)
//         temp = temp->next;
//     temp->next = newnode;
//     newnode->prev = temp;
// }

// // Insert at Front
// void insertFront() {
//     struct node *newnode = createNode();
//     if (head == NULL) {
//         head = newnode;
//         return;
//     }
//     newnode->next = head;
//     head->prev = newnode;
//     head = newnode;
// }

// // Display
// void display() {
//     struct node *temp = head;
//     int count = 0;
//     if (temp == NULL) {
//         printf("List is Empty\n");
//         return;
//     }
//     while (temp != NULL) {
//         printf("\nID:%d Name:%s Dept:%s Desig:%s Salary:%.2f Phone:%ld\n",
//                temp->emp_id, temp->name, temp->dept,
//                temp->desig, temp->sal, temp->phno);
//         temp = temp->next;
//         count++;
//     }
//     printf("Total Employees: %d\n", count);
// }

// // Delete at End
// void deleteEnd() {
//     if (head == NULL) {
//         printf("List Empty\n");
//         return;
//     }
//     struct node *temp = head;
//     if (temp->next == NULL) {
//         free(temp);
//         head = NULL;
//         return;
//     }
//     while (temp->next != NULL)
//         temp = temp->next;
//     temp->prev->next = NULL;
//     free(temp);
// }

// // Delete at Front
// void deleteFront() {
//     if (head == NULL) {
//         printf("List Empty\n");
//         return;
//     }
//     struct node *temp = head;
//     head = head->next;
//     if (head != NULL)
//         head->prev = NULL;
//     free(temp);
// }

// // Find Max Salary
// void maxSalary() {
//     if (head == NULL) return;
//     struct node *temp = head, *max = head;
//     while (temp != NULL) {
//         if (temp->sal > max->sal)
//             max = temp;
//         temp = temp->next;
//     }
//     printf("Max Salary Employee: %s (%.2f)\n", max->name, max->sal);
// }

// // Find Min Salary
// void minSalary() {
//     if (head == NULL) return;
//     struct node *temp = head, *min = head;
//     while (temp != NULL) {
//         if (temp->sal < min->sal)
//             min = temp;
//         temp = temp->next;
//     }
//     printf("Min Salary Employee: %s (%.2f)\n", min->name, min->sal);
// }

// int main() {
//     int ch, n, i;
//     while (1) {
//         printf("\n1.Create\n2.Display\n3.Insert End\n4.Delete End\n");
//         printf("5.Insert Front\n6.Delete Front\n7.Max Salary\n8.Min Salary\n9.Exit\n");
//         printf("Enter Choice: ");
//         scanf("%d", &ch);

//         switch (ch) {
//         case 1:
//             printf("How many employees? ");
//             scanf("%d", &n);
//             for (i = 0; i < n; i++)
//                 insertEnd();
//             break;
//         case 2:
//             display();
//             break;
//         case 3:
//             insertEnd();
//             break;
//         case 4:
//             deleteEnd();
//             break;
//         case 5:
//             insertFront();
//             break;
//         case 6:
//             deleteFront();
//             break;
//         case 7:
//             maxSalary();
//             break;
//         case 8:
//             minSalary();
//             break;
//         case 9:
//             exit(0);
//         default:
//             printf("Invalid Choice\n");
//         }
//     }
// }
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void create(int n) {
    int i;
    struct node *newnode, *temp;
    for (i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        if (head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newnode;
            newnode->next = head;
        }
    }
}

void traverse() {
    if (head == NULL) return;
    struct node *temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
}

int main() {
    int ch, n;
    while (1) {
        printf("\n1.Create\n2.Traverse\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter number of nodes: ");
            scanf("%d", &n);
            create(n);
            break;
        case 2:
            traverse();
            break;
        case 3:
            exit(0);
        }
    }
}
