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

// struct node *addatbeg(struct node**start,int data){
// struct node*temp=(struct node*)malloc(sizeof(struct node));
// temp->data=data;
// temp->next=*start;
// *start=temp;

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

// //NOW INSERTING
// addatbeg(&start,46);


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
//m2
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

// //NOW INSERTING
// struct node*temp=(struct node*)malloc(sizeof(struct node));
// temp->data=56;
// temp->next=start;
// start=temp;


// //printafter
// printf("the linklist is ");
//     struct node*temp3=start;
//     while(temp3!=NULL){
//         printf("%d->",temp3->data);
//         temp3=temp3->next;
//     }
//     printf("NULL");}

//--------------------------------------------------------------------------------------------------------------------------
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

// struct node *addatbeg(struct node**start,int data){
// struct node*temp=(struct node*)malloc(sizeof(struct node));
// temp->data=data;
// temp->next=*start;
// *start=temp;

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

// //NOW INSERTING

// struct node*tempend=(struct node*)malloc(sizeof(struct node));
// struct node*temp=start;
// while(temp->next!=NULL){
//     temp=temp->next;
// }
// temp->next=tempend;
// tempend->data=34;
// tempend->next=NULL;

// //printafter
// printf("the linklist is ");
//     struct node*temp3=start;
//     while(temp3!=NULL){
//         printf("%d->",temp3->data);
//         temp3=temp3->next;
//     }
//     printf("NULL");
// }
//---------------------------------------------------------------------------------------------------------------------------
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

// struct node *addatend(struct node**start,int data){
// struct node*tempend=(struct node*)malloc(sizeof(struct node));
// struct node*temp=*start;
// while(temp->next!=NULL){
//     temp=temp->next;
// }
// temp->next=tempend;
// tempend->data=data;
// tempend->next=NULL;

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

// //NOW INSERTING

// addatend(&start,56);

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
//inseting after value 20
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

struct node *addatend(struct node**start,int data){
struct node*tempend=(struct node*)malloc(sizeof(struct node));
struct node*temp=*start;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=tempend;
tempend->data=data;
tempend->next=NULL;

}

int main(){
    struct node*start=createnode(10);
    start->next=createnode(40);
    start->next->next=createnode(20);
    start->next->next->next=createnode(7);

    //printing before
    printf("the linklist is ");
    struct node*temp2=start;
    while(temp2!=NULL){
        printf("%d->",temp2->data);
        temp2=temp2->next;
    }
    printf("NULL");

//NOW INSERTING

struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*temp=(struct node*)malloc(sizeof(struct node));

ptr=start;
while(ptr->next->data!=20){
    ptr=ptr->next;
}
temp->next=ptr->next->next;
temp->data=3333;
ptr->next->next=temp;


//printafter
printf("the linklist is ");
    struct node*temp3=start;
    while(temp3!=NULL){
        printf("%d->",temp3->data);
        temp3=temp3->next;
    }
    printf("NULL");
}
