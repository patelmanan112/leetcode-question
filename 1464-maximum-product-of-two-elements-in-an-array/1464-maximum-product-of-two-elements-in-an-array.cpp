class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int mx1 = (nums[n-1] -1) * (nums[n-2] -1);
         mx1 =max( mx1 , (nums[0] -1) * (nums[1] -1));
        return mx1;
    }
};