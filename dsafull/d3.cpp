// move zeros to end
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={1,0,3,0,0,9,8,0,4,0,5};
//     int j=0;
//     int count=0;
//     for (int i = 0; i <= 10; i++)
//     {if (arr[i]!=0){
//         arr[j]=arr[i];
//         j++;
//     }
//     else if(arr[i]==0){
//         count++;
//         continue;
//     }
        
//     }
//     for (int i=0;i<count;i++){
//         arr[j+i]=0;
//     }
//      for(int i = 0; i <=j+count-1; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
//                                    optimal method
//  #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to move zeroes to the end
//     void moveZeroes(vector<int>& nums) {
//         // Pointer to the first zero
//         int j = -1;

//         // Find the first zero
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == 0) {
//                 j = i;
//                 break;
//             }
//         }

//         // If no zero found, return
//         if (j == -1) return;

//         // Start from the next index of first zero
//         for (int i = j + 1; i < nums.size(); i++) {
//             // If current element is non-zero
//             if (nums[i] != 0) {
//                 // Swap with nums[j]
//                 swap(nums[i], nums[j]);
//                 // Move j to next zero
//                 j++;
//             }
//         }
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> nums = {0, 1, 0, 3, 12};
//     sol.moveZeroes(nums);

//     // Print the result
//     for (int num : nums) cout << num << " ";
//     cout << endl;
//     return 0;
// }
//          linear search in an array
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={1,2,44,6,88,8};
//     int target=8;
// for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
//  if(arr[i]==target){
//     int res= i;
//     cout<<res;
//  }

// }
// return 0;}
///                                      union
