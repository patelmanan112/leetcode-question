class Solution {
public:
    int thirdMax(vector<int>& nums) {
       long int first = nums[0];
       long int second = LONG_MIN;
       long  int third= LONG_MIN;
        if(nums.size() == 2 ){
            int min1 = max(nums[0] , nums[1]);
            return min1;
        }
        else if (nums.size() == 1){
            return nums[0];
        }
        for(int i =1 ; i<nums.size() ; i++){
            if(nums[i] > first){
                third = second;
                second = first;
                first = nums[i];
            }
            else if (nums[i] >  second && nums[i] != first){
                third = second;
                second = nums[i];
            }
            else if(nums[i] > third && nums[i] != second && nums[i] != first){
                third = nums[i];
            }
        }
        if(third == LONG_MIN){
            return first;
        }
        return third;
    }
};