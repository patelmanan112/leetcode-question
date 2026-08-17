class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
   
        sort(nums.begin() , nums.end());
        int min = nums[0];
        int count =0;
        for(int i =1; i<nums.size() ; i++){
           
           if(nums[i] <= min){
            int diff = min +1 - nums[i]  ;
            count = count + diff ;
            nums[i] = nums[i] + diff;
           
           }
            min = nums[i];
        }
        return count;
        // set<int> ans;
        // int count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (ans.count(nums[i]) == 0) {
        //         ans.insert(nums[i]);
        //     }
        //     else {
        //         int original = nums[i];
        //         int value = nums[i] + 1;
        //         while (ans.count(value)) {
        //             value++;
        //         }
        //         count += value - original;
        //         nums[i] = value;
        //         ans.insert(value);
        //     }
        // }

        // return count;
    }
};