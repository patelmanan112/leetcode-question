class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        for(int i =0; i<=nums.size() - k ; i++){
            unordered_set<int> seen;

            for(int j = i ; j<i + k; j++){
               seen.insert(nums[j]);
            }
            for(int j : seen){
                freq[j]++;
            }
        }
        int maxi = -1;
        for( auto& it : freq){
            if(it.second == 1){
                maxi = max(it.first , maxi);
            }
        }
        return maxi;
    }
};