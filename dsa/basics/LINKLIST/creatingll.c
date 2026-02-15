#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
// struct node*createnode(int data){
//     struct node*newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=NULL;
//     return newnode;
// }
// int main(){
//     struct node*start=createnode(10);
//     start->next=createnode(23);
//     start->next->next=createnode(4);
//     //printing this node 
//     printf("the linklist is ");
//     struct node*temp=start;
//     while(temp!=NULL){
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
//     printf("NULL");
// }

//------------------------------------------------------------------------------------------------------------------------------
int main(){
    struct node*start=(struct node*)malloc(sizeof(struct node));
    struct node*a=(struct node*)malloc(sizeof(struct node));
    start->data=23;
    start->next=a;
    a->data=26;
    a->next=NULL;
    //printing this node 
    printf("the linklist is ");
    struct node*temp=start;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

//--------------------------------------------------------------------------------------------------------------------------------