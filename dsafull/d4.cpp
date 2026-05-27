// #include<iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;

//     ListNode(int x){
//         val = x;
//         next = NULL;
//     }
// };

// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){

//     ListNode* head = new ListNode(0);
//     ListNode* temp = head;

//     int carry = 0;

//     while(l1 != NULL || l2 != NULL || carry){

//         int sum = carry;

//         if(l1 != NULL){
//             sum = sum + l1->val;
//             l1 = l1->next;
//         }

//         if(l2 != NULL){
//             sum = sum + l2->val;
//             l2 = l2->next;
//         }

//         carry = sum / 10;

//         temp->next = new ListNode(sum % 10);

//         temp = temp->next;
//     }

//     return head->next;
// }

// void print(ListNode* head){

//     while(head != NULL){
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main(){

//     // l1 = 2 4 3
//     ListNode* l1 = new ListNode(2);
//     l1->next = new ListNode(4);
//     l1->next->next = new ListNode(3);

//     // l2 = 5 6 4
//     ListNode* l2 = new ListNode(5);
//     l2->next = new ListNode(6);
//     l2->next->next = new ListNode(4);

//     ListNode* ans = addTwoNumbers(l1, l2);

//     print(ans);

//     return 0;
// }


//                                  dsa 
// lower bound 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,8,45,133};
    int x=8;
    int y=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
        if( arr[i]>=x){
            cout<< i;
           
             break;}}
        
         
 return 0;
}
                       // upper bound 
      #include<iostream>
using namespace std;
int main(){
    int arr[]={1,5,8,45,133};
    int x=8;
    int y=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n;i++){
        if( arr[i]=x){
            cout<< i;
           
             break;}}
        
         
 return 0;
}                 