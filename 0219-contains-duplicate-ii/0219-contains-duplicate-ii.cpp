class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int> st;
        bool check = true;
       for(int i=0; i<nums.size() ; i++){
        if(st.count(nums[i]) == 1){
          int sub = i - st[nums[i]] ;
          if( sub <=k){
            return true;
          }
          st[nums[i]] = i;
        }
        st[nums[i]] = i;
       } 
       return false;
    }
};