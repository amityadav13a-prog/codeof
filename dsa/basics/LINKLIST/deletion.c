// //AT BEG ATEND AT ANY NODE
// //AT BEG
// #include<stdio.h>
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

// struct node *delatbeg(struct node**start){
// struct node*temp=(struct node*)malloc(sizeof(struct node));
// temp=*start;
// *start=temp->next;
// free(temp);


// }

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

// //NOW deleting
// delatbeg(&start);


// //printafter
// printf("the linklist is ");
//     struct node*temp3=start;
//     while(temp3!=NULL){
//         printf("%d->",temp3->data);
//         temp3=temp3->next;
//     }
//     printf("NULL");
// }

//--------------------------------------------------------------------------------------------------------------------------
// #include<stdio.h>
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
//-------------------------------------------------------------------------------------------------------------------------
//AT END
// #include<stdio.h>
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
// while(temp->next->next!=NULL)
// {
//     temp=temp->next;
// }
// free(temp->next);
// temp->next=NULL;
// //printafter
// printf("the linklist is ");
//     struct node*temp3=start;
//     while(temp3!=NULL){
//         printf("%d->",temp3->data);
//         temp3=temp3->next;
//     }
//     printf("NULL");
// }
//-----------------------------------------------------------------------------------------------------------------------------
//at any 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
// AT STARTING
struct node*createnode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;}


int main(){
    struct node*start=createnode(10);
    start->next=createnode(23);
    start->next->next=createnode(4);
    start->next->next->next=createnode(9);
    //printing before
    printf("the linklist is ");
    struct node*temp2=start;
    while(temp2!=NULL){
        printf("%d->",temp2->data);
        temp2=temp2->next;
    }
    printf("NULL");

//NOW deletion
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*temp=(struct node*)malloc(sizeof(struct node));
ptr=start;
while(ptr->next->data!=4)
{
 ptr=ptr->next;
}
temp->next=ptr->next->next;
free(ptr->next);
ptr->next=temp->next;
//printafter
printf("the linklist is ");
    struct node*temp3=start;
    while(temp3!=NULL){
        printf("%d->",temp3->data);
        temp3=temp3->next;
    }
    printf("NULL");
}
//-----------------------------------------------------------------------------------------------------------------------