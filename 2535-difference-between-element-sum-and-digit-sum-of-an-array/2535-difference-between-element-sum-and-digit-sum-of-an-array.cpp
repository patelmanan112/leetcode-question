class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i =0; i<nums.size() ; i++){
            int temp  = nums[i];
            sum1 += temp;
            while(temp!=0){
                int upd = temp%10;
                sum2 += upd;
                temp = temp/10;
            }

        }
        int sub = sum1 - sum2;

        return sub>0 ? sub : -1 * sub ;
    }
};