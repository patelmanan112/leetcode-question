class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int mid = (nums.size()/2) ;
        unordered_map<int ,int> freq;
        for(int i =0; i<nums.size() ; i++){
            freq[nums[i]]++;
        }
        if(freq[nums[mid]] == 1){
            return true;
        }
        return false;
    }
};