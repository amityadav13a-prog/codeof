/* *
   **
   ***
   ****
   ***
   **
   *
   */

//   #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i=1;i<2*n;i++)
//    { int str=i;
//      if(i>n) {str=2*n-i;}
//      for(int j=1;j<=str;j++)
//      {cout<<"* ";}
    
//     cout<<"\n";
//    }
// }
// int main(){int t;
//     cin>>t;
// for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     printp(n);}
//     return 0;}

    /*
    1
    01
    101
    0101
    10101
    */
   
//  #include <iostream>
// using namespace std;
// void printp(int n){
//   int str=1;
//     for(int i=0;i<n;i++)
//    { 
//      if(i%2==0) {str=1;}
//      else str=0;
//      for(int j=0;j<=i;j++)
//      {cout<<str;
//      str=1-str;}
    
//     cout<<"\n";
//    }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//      int n;
//      cin>>n;
//      printp(n);}
//     return 0;}
/*
1      2
12    21
123  321
12344321*/

//  #include <iostream>
// using namespace std;
// void printp(int n){    
//   for(int i=0;i<n;i++){
//     int str=1;
//     for(int j=0;j<=i;j++){cout<<str;
//     str=str+1;}
//     for( int j=0;j<2*(n-i-1);j++){cout<<" ";}
//     for(int j=0;j<=i;j++){
//        str=str-1;
//        cout<<str;
//    }
// cout<<"\n";
//   }
   
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//      int n;
//      cin>>n;
//      printp(n);}
//     return 0;}
/*
1
23
456
78910*/
//  #include <iostream>
// using namespace std;
// void printp(int n){  int num=1;
//     for(int i =1;i<=n;i++)
//    {
//     for(int j=1;j<=i;j++)
//      {
//       cout<<num;
//     num=num+1;}

//     cout<<"\n";
//    }
// }
// int main(){int t;
//     cin>>t;
// for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     printp(n);}
//     return 0;}
/*
A
AB
ABC
ABCD
*/
 #include <iostream>
using namespace std;
void printp(int n){  
    for(int i =1;i<=n;i++)
   {char num= 'A';
    for(int j=1;j<=i;j++)
     {
      cout<<num;
    num=num+1;}

    cout<<"\n";
   }
}
int main(){int t;
    cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    printp(n);}
    return 0;}