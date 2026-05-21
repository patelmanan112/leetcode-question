class Solution {
public:
    int dominantIndex(vector<int>& nums) {
     int indx =0;
     int max = nums[0];
     for(int i=0; i< nums.size() ; i++){
        if(nums[i] > max){
            max = nums[i];
            indx = i;
        }
     }
     for(int i=0; i<nums.size() ; i++){
        if(i !=indx && max< 2*nums[i]){

            return -1;
        }
     }
     return indx;
    }
};