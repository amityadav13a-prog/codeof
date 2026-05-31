class Solution {
public:
    int mySqrt(int x) {
    long long low=1;long long high=x;
    int ans=1;
    if (x==0){return 0;}
    else {
    while(low<=high){
     long long mid=(low+high)/2;
        if (mid*mid<=x){ans=mid;
        low=mid+1;}
       else high=mid-1 ;
    } return high;}
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }return k;
    }
};