// remove duplicste element from shortedarray
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,3,4,5,5};
//     int n=sizeof(arr)/ sizeof(arr[0]);;
//     for (int i=0;i<=n;i++){
//         if(arr[i]==arr[i+1]){
//             arr[i+1]=arr[i+2];
//            // else{free(arr[i+1]);}
//         }
//     }
//     for(int j=0;j<=n;j++){
//          std::cout<<arr[j];
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1,2,2,3,4,5,5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int j = 0;
//     for(int i = 1; i < n; i++) {
//         if(arr[i] != arr[j]) {
//             j++;
//             arr[j] = arr[i];
//         }
//     }
//     for(int i = 0; i <= j; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// left rotate array by 1 
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,2,3,4,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    int p=arr[0];
    for(int i = 0; i < n; i++) {
        if(i!=n-1){
         arr[j] = arr[i+1];
         j++;}
         else if(i=n-1){
            j++;
            arr[j]=p;
         }}
          for(int i = 0; i <= j; i++) {
    cout << arr[i] << " ";
  }
        return 0;}
        // 