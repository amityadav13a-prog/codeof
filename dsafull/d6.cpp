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
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;
        
        while(left < right) {
            int area = min(height[left], height[right]) * (right - left);
            maxWater = max(maxWater, area);
            
            // Chhoti height wali pointer ko move karo
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxWater;
    }
};