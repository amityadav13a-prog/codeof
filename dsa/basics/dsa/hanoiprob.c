#include<stdio.h>
#include<stdlib.h>
void TOH(int n,int a,int b,int c){
    int count=0;
    if(n>0){
        TOH(n-1,a,c,b);
        printf("move a disk from %d to  %d\n",a,c);
        count++;
        TOH(n-1,b,a,c);
    }
}
int main(){
    printf("enter the number of disk:");
    int n;
    scanf("%d",&n);
    printf("we have 3 towers a b and c and we have to transfer to c from a STEPS ARE BELOW:-\n");
    int a,b,c;
    TOH(n,1,2,3);
}