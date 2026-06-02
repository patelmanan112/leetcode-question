class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> vap;
        for(int i=0; i<nums.size(); i++){
            vap.push_back(nums[i]);
        }
        for(int i=nums.size()-1; i>=0; i--){
            vap.push_back(nums[i]);
        }

        return vap;
    }
};