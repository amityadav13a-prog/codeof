#include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// // AT STARTING
// struct node*createnode(int data){
//     struct node*newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=NULL;
//     return newnode;}


// int main(){
//     struct node*start=createnode(10);
//     start->next=createnode(23);
//     start->next->next=createnode(4);
//     //printing before
//     printf("the linklist is ");
//     struct node*temp2=start;
//     while(temp2!=NULL){
//         printf("%d->",temp2->data);
//         temp2=temp2->next;
//     }
//     printf("NULL");

// //NOW deletion
// struct node*temp=(struct node*)malloc(sizeof(struct node));
// temp=start;
// start=temp->next;
// free(temp);

// //printafter
// printf("the linklist is ");
//     struct node*temp3=start;
//     while(temp3!=NULL){
//         printf("%d->",temp3->data);
//         temp3=temp3->next;
//     }
//     printf("NULL");
// }