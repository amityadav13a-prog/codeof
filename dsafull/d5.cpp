//         BINARY SEARCH 


 //findind sq root of a number 
//     #include<iostream>
// using namespace std;
// int main(){
// int n=97;
// for(int i=0;i<=n;i++){
//     if(i*i==n){
//         cout<<i;
//         break;
//     }
//     else if( i*i>n){
//         cout<<i-1;
//         break;
//     }
// }
//     return 0;
// }
// optimal method 
//   #include<iostream>
// using namespace std;
// int sqr(int n){
//     int low=1;int high=n;
//     int ans=1;
//     while(low<=high){
//        long long mid=(low+high)/2;
//         if (mid*mid<=n){ans=mid;
//         low=mid+1;}
//        else high=mid-1 ;
//     } return ans; // or high
// }
// int main(){
//     int x=sqr(99);
//     cout<<x;}

    // nth root of given intezer
//  #include<iostream>
// using namespace std;
// double mul(double num,int n){
// double ans=1.0;
// for(int i=1;i<=n;i++){
//     ans=ans*num;
// }return ans;
// }
// void  nroot(int n,int m){
//     double low=1;double high=m;
//     double eps= 1e-6;
//     while((high-low)>eps){
//      double mid=(low+high)/2;
//         if(mul(mid,n)<m){
//            low=mid;
//         }else {high = mid;}
//     } 
// cout<<low <<" " <<high<<endl;
// }
// int main(){
//     int n,m;
//     cin>> n>>m ;
//     nroot(n,m);
//    return 0;
// }

// 