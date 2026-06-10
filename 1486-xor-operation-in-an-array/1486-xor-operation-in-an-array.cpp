class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        
        for(int i = 0; i < n; i++) {
            int sum = start + 2 * i;
            nums.push_back(sum);
        }
        int ans = nums[0];
        for(int j = 1; j < n; j++) {
            ans = ans ^ nums[j];
        }

        return ans;
    }
};