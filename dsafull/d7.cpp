class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) {
                return 0;
            }
           
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) {
                return 0;
            }
            
            rev = rev * 10 + pop;
        }
        return rev;
    }
};

// mediadn of arry
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();

        vector<int> v(m + n);

        int i = 0, j = 0, k = 0;

        while(i < m && j < n) {
            if(nums1[i] <= nums2[j])
                v[k++] = nums1[i++];
            else
                v[k++] = nums2[j++];
        }

        while(i < m)
            v[k++] = nums1[i++];

        while(j < n)
            v[k++] = nums2[j++];

        int size = m + n;

        if(size % 2 == 0)
            return (v[size/2] + v[size/2 - 1]) / 2.0;

        return v[size/2];
    }
};