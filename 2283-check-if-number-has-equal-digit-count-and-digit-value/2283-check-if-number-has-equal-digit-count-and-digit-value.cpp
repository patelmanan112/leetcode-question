class Solution {
public:
    bool digitCount(string num) {
        vector<int> freq(10, 0);
        for (char ch : num) {
            freq[ch - '0']++;
        }
        for (int i = 0; i < num.size(); i++) {
            if (num[i] - '0' != freq[i]) {
                return false;
            }
        }
        return true;
    }
};