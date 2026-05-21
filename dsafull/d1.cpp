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
//                                   we have to find                          second largest 
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
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,6,4,5};
//  for(int i =0;i<=5;i++){
//     if (arr[i]>arr[i+1])
//     return false;
//     }return  true;
//     return 0;}
//     //
    #include <bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If any element is smaller than the previous one, return false
            if (arr[j] < arr[i]) 
                return false;
        }
    }

    return true; // Return true if no unsorted elements are found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    bool ans = isSorted(arr, n);
    
    // Output result
    if (ans) cout << "True" << endl;
    else cout << "False" << endl;
    
    return 0;
}
