//                          largest
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,4,3,5};
//     int lr=arr[0];
//     for (int i=1;i<5;i++){
//         if (arr[i]>lr){lr=arr[i];}
//     }
// std::cout<<lr<<"\n";
// std::cout<<"hey amit"<<std::endl;
// return 0;}
//                      second largest 
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,4,3,5};
//     int lr=arr[0];
//     for (int i=1;i<5;i++){
//         if (arr[i]>lr){lr=arr[i];}
//     }
// std::cout<<lr<<"\n";
//  int slr= -1;
//  for (int j=1;j<5;j++){
//         if (arr[j]>slr&& arr[j]<lr){slr=arr[j];}}
//         std::cout<<slr<<"\n";
// std::cout<<"hey amit"<<std::endl;
// return 0;}
//optimal in dono loop ko ek sathn run kr de optimal mil jayega
//                 check if arr sorted
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,6,4,5};
 for(int i =0;i<=5;i++){
    if (arr[i]>arr[i+1])
    return false;
    }return  true;

    return 0;}