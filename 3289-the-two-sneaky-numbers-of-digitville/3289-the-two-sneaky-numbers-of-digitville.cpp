class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int , int> mp;
        vector<int> arr;
        for(int i=0; i<nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto& it : mp){
            if(it.second == 2){
                arr.push_back(it.first);
            }
        }

        return arr;
    }
};