class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr = {-1 , -1};

        for(int i=0; i<nums.size() ; i++){
            if(nums[i] == target){

                if(arr[0] == -1){
                    arr[0] = i;
                }
                arr[1] = i;
            }
        }

        return arr;
    }
};