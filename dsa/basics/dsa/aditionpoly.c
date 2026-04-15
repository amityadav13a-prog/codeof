#include<stdio.h>
#include<stdlib.h>
struct p1{
    int coeff;
    int expo;
    struct p1*next;
};
struct p1*createp1(int c,int e){
    struct p1*newnode=(struct p1*)malloc(sizeof(struct p1));
    newnode->coeff=c;
    newnode->expo=e;
    newnode->next=NULL;
};
struct p2{
    int coeff;
    int expo;
    struct p2*next;
};
struct p2*createp2(int c,int e){
    struct p2*newnode=(struct p2*)malloc(sizeof(struct p2));
    newnode->coeff=c;
    newnode->expo=e;
    newnode->next=NULL;
};
void add(struct p1*head,struct p2*head2){
    struct p1*temp=head;
    struct p2*temp2=head2;
    while (temp!=NULL){
        temp->coeff=temp->coeff+temp2->coeff;
        temp->expo=temp->expo;
        temp=temp->next;
    }

}
int main(){
    struct p1*start1=createp1(2,2);
    start1->next=createp1(3,1);
    start1->next->next=createp1(2,0);
    struct p2*start1=createnp2(4,2);
    start2->next=createp2(2,1);
    start2->next->next=createp2(1,0);
    add(start1,start2);
    struct p1*temp=start1;
    while(temp!=NULL){
        printf("%d x%d+",temp->coeff,temp->expo);
}

}
