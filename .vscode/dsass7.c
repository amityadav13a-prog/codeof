#include <stdio.h> 
#include <string.h> 
 
#define MAX 100 
 
char stack[MAX];
 int top = -1; 
 
void push(char x){     if(top == MAX-1){   
          printf("Stack Overflow\n"); 
    } 
    else{       
          stack[++top] = x; 
    } 
} 
 
char pop(){     if(top == -1){
             printf("Stack Underflow\n");   
                   return '\0'; 
    } 
    return stack[top--]; 
} 
 
int main(){     char str[100]; 
 
    printf("Enter string: ");     scanf("%s",str); 
 
    // push all characters
         for(int i=0; str[i]!='\0'; i++){     
                push(str[i]); 
    } 
 
    // pop to reverse   
      for(int i=0; str[i]!='\0'; i++){      
           str[i] = pop(); 
    } 
 
printf("Reversed string: %s",str); 
 
    return 0; 
} 
