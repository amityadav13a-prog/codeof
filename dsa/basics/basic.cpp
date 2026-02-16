// #include <iostream>

// int main(){
//     std::cout<<"hey amit" << "\n";
//       std::cout<<"hey amit"<<std::endl;
//       return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// std::cout<<"hey amit" << "\n";
// std::cout<<"hey amit"<<std::endl;
// return 0;}

// #include <iostream>
// using namespace std;
// int main(){
//   int x,y;
//   cin>>x>>y;
//   cout<<"valve of x:\n" <<x ;
//   cout<<"value of y:" <<y;
//   return 0;

// }

//             if else

// #include <iostream>
// using namespace std;
// int main(){
//   int age;
//   cin>>age;
//   if(age>=18)
//   cout<<"adult";
//   else
//   cout<<"minor";
//   return 0;
// }
//            marks vs grade
// #include <iostream>
// using namespace std;
// int main(){
//   int marks;
//   cin>>marks;
//    if(marks>100){cout<<"enter correct marks";}
//   else if (marks>=80){cout<<"A";}
//   else if (marks>=60){cout<<"B";}
//   else if (marks>=50){cout<<"c";}
//   else if (marks>=25){cout<<"d";}
//   else if (marks<25){cout<<"F";}
//   return 0;
// }


//               switch statment
// for 1 print monday and 2 print tuesday and so on till sunday
// #include <iostream>
// using namespace std;
// int main(){
//int daynum;
// cin>>daynum;
// switch (daynum)
// {
// case 1:
//   cout<<"monday";
//   break;
// case 2:
//   cout<<"tuesday";
//   break;
// case 3:
//   cout<<"wednessday";
//   break;
//   case 4:
//   cout<<"thusday";
//   break;
//   case 5:
//   cout<<"friday";
//   break;
//   case 6:
//   cout<<"saturday";
//   break;
//   case 7:
//   cout<<"sunday";
//   break;
// default:
//   break;
// }
//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//  int arr[5] ;
//  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//  cout<<arr[0];
//   return 0;
// }

//          for loop
// #include <iostream>
// using namespace std;
// int main(){
//   for(int i=0;i<=10;i++)
//   {cout<<"hello amit\n";}

//   return 0;
// }

//        while loop
// #include <iostream>
// using namespace std;
// int main(){
//   int i=0;
//   while(i<=5){
//     cout<<"hello amit\n";
//     i++;
//   }
//   return 0;
// }
//                           do while 
// #include <iostream>
// using namespace std;
// int main(){
//   int i=0;
//   do{
//     cout<<"hello amit\n";
//     i++;
//   }while(i<=0);
//   return 0;
// }
//               functions
//void does not return anything
//return 
//parametarised
//nonparametrised
// #include <iostream>
// using namespace std;
// int sum(int n1,int n2){int n3= n2+n1;
// return n3;}//return hona chahiye alyas if int se function bna rhe ho to
// int main(){
//   int n1,n2;
//   cin>>n1>>n2;
//   int res=sum(n1,n2);//cpy is passed original value remain same
//   int minimum=min(n1,n2);
//   int maximum=max(n1,n2);
//   cout<<res<<minimum<<maximum;
  
//   return 0;
// } 

// reference pass by address
// #include <iostream>
// using namespace std;
// void dosomething(int &num){
// cout<<num<<endl;
// num+=5;
// cout<<num<<endl;
// num+=5;
// cout<<num<<endl;
// }

// int main(){
//   int num = 10;
//   dosomething(num);
//   cout<<num<<endl;//original vaue os change
 
//   return 0;
// }

//              TIME COMPLEXITY
/* TIME COMPLEXITY IS NOT THE TIME TAKEN 
THE RATE AT WHICH TIME TAKEN INC WITH RESPECT TO INPUT SIZE
BIG-OH NOTATION->O(TIME TAKEN)
for (I=1;I<=n;I++)
{COUT<<"HI";}
>tc to be computed in terms of worst case senario
> avoid constant
>avoid lower value
>0(n*3)  worst case upper bound
theta0  avg complexity avg
omegabest case lowebound
for(int i=0;i<n;i++)
{for(int j=0;j<i;j++)
{cout<<"hi"}}
O((n/2)^2+)
 SPACE COMPLEXITY(SPACE U TAKE TO SOLVE PROBLEM)
AXILARY SPACE+INPUT SPACE(SPACE TO STORE)
INT A[N]  >O(N)
>>>>NEVER DO ANYTHING TO INPUT UNTILL SAID
1SEC =10^8 APPROX=O(10^8)
*/


//>>>>>>>>>>>>>>>> PATTERN PRINTING>>>>>>>>>>>>>>>>
 /*****
   ****
   ****
   ****
   */

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//    for(int i =0;i<n;i++)//for num of line,,, outer loop
//    {
//     for(int j=0;j<n;j++)//focus on colounm& then conect them
//     {cout<<"* ";}
//     cout<<"\n";
//    }
// }

// by functions
// #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i =0;i<n;i++)//for num of line,,, outer loop
//    {
//     for(int j=0;j<n;j++)//focus on colounm& then conect them
//     {cout<<"* ";}
//     cout<<"\n";
//    }
// }
// int main(){int t;
//     cin>>t;
// for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     printp(n);}
//     return 0;
// }
    

/* *
  **
  ***
  ****
  ***** */
//  #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i =1;i<=n;i++)
//    {
//     for(int j=1;j<=i;j++)
//     {cout<<"* ";}
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

/* 1
   12
   123
   1234
   12345 */
//  #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i =1;i<=n;i++)
//    {int num =1;
//     for(int j=1;j<=i;j++)
//      {cout<<num;
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

/*1
  22
  333
  4444*/
//  #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i =1;i<=n;i++)
//    {
//     for(int j=1;j<=i;j++)
//      {cout<<i;}//good thing

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
*****
****
***
**
* */
// #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i =1;i<=n;i++)
//    {
//     for(int j=n-i+1;j>=1;j--)
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
//     return 0;
// }

/*
  12345
  1234
  123
  12
  1  */
//   #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i=1;i<=n;i++)
//    {int num =1;
//     for(int j=n-i+1;j>=1;j--)
//      {cout<<num;
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

/* *
  * *
 * * * 
 */
//   #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<(n-i+1);j++)
//      {cout<<" ";
//     }for(int j=0;j<(2*i+1);j++){cout<<"*";}
//     for(int j=0;j<(n-i+1);j++)
//      {cout<<" ";
//     } 
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
/* *****
    ***
     *
*/
//   #include <iostream>
// using namespace std;
// void printp(int n){
//     for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<=(i);j++)
//      {cout<<" ";
//     }for(int j=0;j<(2*n-(2*i+1));j++){cout<<"*";}
//     for(int j=0;j<=(i);j++)
//      {cout<<" ";
//     } 
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

// //  #include <iostream>
// // using namespace std;
// // void printp(int n){
  //     for(int i=0;i<n;i++)
  //  {
  //   for(int j=0;j<(n-i+1);j++)
  //    {cout<<" ";
  //   }for(int j=0;j<(2*i+1);j++){cout<<"*";}
  //   for(int j=0;j<(n-i+1);j++)
  //    {cout<<" ";
  //   } 
  //   cout<<"\n";
  //  }


  //   for(int i=0;i<n;i++)
  //  {
  //   for(int j=0;j<=(i);j++)
  //    {cout<<" ";
  //   }for(int j=0;j<(2*n-(2*i+1));j++){cout<<"*";}
  //   for(int j=0;j<=(i);j++)
  //    {cout<<" ";
  //   } 
  //   cout<<"\n";
  //  }
// // }
// // int main(){int t;
// //     cin>>t;
// // for(int i=0;i<t;i++){
// //     int n;
// //     cin>>n;
// //     printp(n);}
// //     return 0;}
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
//  #include <iostream>
// using namespace std;
// void printp(int n){  
//     for(int i =1;i<=n;i++)
//    {char num= 'A';
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
ABCDE
ABCD
ABC
AB
A*/
//  #include <iostream>
// using namespace std;
// void printp(int n){  
//     for(int i =1;i<=n;i++)
//    {char num= 'A';
//     for(int j=1;j<=n-i+1;j++)
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
BB
CCC
DDDD*/
//  #include <iostream>
// using namespace std;
// void printp(int n){  char num= 'A';
//     for(int i =1;i<=n;i++)
//    {
//     for(int j=1;j<=i;j++)
//      {
//       cout<<num;
//     }

//     cout<<"\n";
//     num=num+1;
//    }
// }
// int main(){int t;
//     cin>>t;
// for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     printp(n);}
//     return 0;}
/*   A
    ABA
   ABCBA*/
#include <iostream>
using namespace std;
void printp(int n){
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<(n-i+1);j++)
     {cout<<" ";
    }
    char num='A';
    for(int j=0;j<(2*i+1);j++){cout<<num;
    num=num+1;}
    
    for(int j=0;j<(n-i+1);j++)
     {cout<<" ";
    } 
    cout<<"\n";
   }
}
