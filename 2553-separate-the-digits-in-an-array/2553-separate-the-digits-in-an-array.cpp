class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
      vector<int> ans;
      for(int i=0; i<nums.size() ; i++){
        int temp = nums[i];
        string store;
        while(temp!=0){
            int upd = temp%10;
            store += (upd + '0');
            temp = temp/10;

        }
       for(int k = store.size() -1 ; k>=0 ; k--){
        ans.push_back(store[k] - '0');
      }
      }
   

      return ans;
    }
};