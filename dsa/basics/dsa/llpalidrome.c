#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int arr[MAX];
struct node{
    int data;
    struct node*next;
};
struct node*createnode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void pp(struct node*head){
    struct node*temp=head;
    int i=0;
    while(temp!=NULL){
        arr[i]=temp->data;
        temp=temp->next;
        i++;
    }
     for(int j = 0; j < i/2; j++){
        if(arr[j] != arr[i-j-1]){
            printf("\nNot a Palindrome\n");
            return;
        }
    }

    printf("\nPalindrome\n");
}

int main(){
    struct node*start=createnode(1);
    start->next=createnode(23);
    start->next->next=createnode(23);
    start->next->next->next=createnode(1);
    //printing this node 
    printf("the linklist is ");
    struct node*temp=start;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    pp(start);

}
