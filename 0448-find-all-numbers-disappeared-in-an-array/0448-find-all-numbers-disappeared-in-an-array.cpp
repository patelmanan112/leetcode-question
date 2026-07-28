class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> sp;
            vector<int> ans;
        for(int i=0; i<nums.size() ; i++){
            sp.insert(nums[i]);
        }
        for(int i =1; i<=nums.size(); i++){
            if(sp.find(i) == sp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};