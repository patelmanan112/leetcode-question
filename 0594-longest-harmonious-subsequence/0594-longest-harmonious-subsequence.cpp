class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int , int> mp;

        for(int i=0; i<nums.size() ; i++){
          mp[nums[i]]++;
        }
        int ans = 0;
        for(auto& it : mp){
            int sec = it.first + 1;
            if(mp.find(sec) != mp.end()){
                if(sec - it.first == 1){
                    int ans1 = mp[sec] + it.second;
                    ans = max(ans , ans1);
                }
            }
        }

        return ans;
    }
};