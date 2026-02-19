#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top=-1;
void push(int x){
    
 
    if (top>MAX){
        printf("stack is full\n");
    return;}
    top=top+1;
    stack_arr[top]=x;
    
}
void display(int arr[]){
 for(int i=0;i<=top;i++){
    printf("%d\n",arr[i]);
}
}
void pop(int arr[top]){
    int value;
    value=stack_arr[top];
top=top-1;
}
int main(){
int data;
push(1);
push(15);
push(6);
push(7);
push(7);
push(8);
push(89);
display(stack_arr);
}