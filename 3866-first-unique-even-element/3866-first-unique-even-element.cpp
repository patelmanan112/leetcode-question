class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int , int> vp;
        for(int i=0; i<nums.size() ; i++){
            vp[nums[i]]++;
        }
        for(int i=0; i<nums.size() ; i++){
            if(vp[nums[i]] == 1){
                if(nums[i] %2==0){
                    return nums[i];
                }
            }
        }
    return -1;
    }
};