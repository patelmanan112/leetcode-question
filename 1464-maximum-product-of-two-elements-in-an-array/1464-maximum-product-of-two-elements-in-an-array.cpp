class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int max1 = nums[0];
        int max2;
        for(int i=0; i<nums.size() ; i++){
            if(nums[i] >= max1){
                   max2 = max1;
                max1 = nums[i];
             
            }
        }

        int ans = (max1 -1)*(max2 -1);
        return ans;
    }
};