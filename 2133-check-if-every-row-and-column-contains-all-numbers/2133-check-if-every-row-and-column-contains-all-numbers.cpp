class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        
        for(int i = 0; i < n; i++) {
            unordered_map<int, int> freq;

            for(int j = 0; j < n; j++) {
                freq[matrix[i][j]]++;
            }

            for(int num = 1; num <= n; num++) {
                if(freq[num] != 1) {
                    return false;
                }
            }
        }

        
        for(int j = 0; j < n; j++) {
            unordered_map<int, int> freq;

            for(int i = 0; i < n; i++) {
                freq[matrix[i][j]]++;
            }

            for(int num = 1; num <= n; num++) {
                if(freq[num] != 1) {
                    return false;
                }
            }
        }
        return true;
    }
};