class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int > mp;
        int maxium = 0;
        for(int i=0; i<nums.size() ; i++){
            mp[nums[i]]++;
            maxium = max(maxium , mp[nums[i]]);
        }
        int sum =0;
        for(auto& it : mp){
            if(maxium == it.second){
                sum += maxium;
            }
        }
    return sum;
    }
};