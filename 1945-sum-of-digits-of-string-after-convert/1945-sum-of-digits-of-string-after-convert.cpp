class Solution {
public:
    int getLucky(string s, int k) {
        string result;
        for (int i = 0; i < s.size(); i++) {
            int asc = s[i] - 'a' + 1; 
            result += to_string(asc); 
        }
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum = 0; 
            for (int j = 0; j < result.size(); j++) {
                sum += result[j] - '0';
            }

            result = to_string(sum);   
        }

        return sum;
    }
};