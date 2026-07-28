class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count =0;
        int maxium = 0;
        for(int i =0 ; i<nums.size() ; i++){
            maxium = max(maxium , nums[i]);
        }
        for(int i =0; i <nums.size() ; i++){
            while(maxium != nums[i]){
                nums[i] = nums[i] + 1;
                count++;
            }
        }
    return count;
    }

};