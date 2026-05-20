class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        for(int i =0; i<nums.size() ; i++){
            for(int j =0; j<nums.size() - i -1 ; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        int n = nums.size();
        int pro1 = nums[n-1] * nums[n -2] * nums[n-3];
        int pro2 = nums[0] * nums[1] * nums[n-1];


        return max(pro1 , pro2);
    }
};