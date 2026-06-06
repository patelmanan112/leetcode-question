class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        unordered_map<int , int> freq;
        for(int i=0; i<nums.size() ; i++){
            int temp = nums[i];

            while(temp!=0){
                int upd = temp%10;
                if(upd == digit){
                    freq[digit]++;
                }
                temp = temp/10;
            }
        }
        return freq[digit];
    }
};