class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vp;
        string ans;
       
        for(int i=0; i<nums.size(); i++){

            if((i==nums.size()-1) && ans.empty()){
                vp.push_back(to_string(nums[i]));
                return vp;
            }

              if(i == nums.size() -1 && !ans.empty()){
                    ans = ans + to_string(nums[i]);
                vp.push_back(ans);
                return vp;
            }
            if(ans.empty() && nums[i +1] == nums[i] + 1){
                ans = to_string(nums[i]) + "->" ;
            }
            else if( !ans.empty() && nums[i +1] == nums[i] + 1){
                continue;
            }
            else if(!ans.empty() && nums[i+1] != nums[i] + 1){
                ans = ans + to_string(nums[i]);
                vp.push_back(ans);
                ans = "";
            }
            else{
                vp.push_back(to_string(nums[i]));
                ans = "";
            }

        }

        return vp;
    } 
};