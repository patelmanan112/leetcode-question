class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = nums[0];
        int indx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > mx) {
                mx = nums[i];
                indx = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i != indx && mx < 2 * nums[i]) {
                return -1;
            }
        }
        return indx;
    }
};