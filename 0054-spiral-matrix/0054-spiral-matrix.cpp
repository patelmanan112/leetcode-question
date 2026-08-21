class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> freq;

        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i = 0; i < (min(rows, cols) + 1) / 2; i++) {
            for(int j = i; j < cols - i; j++) {
                freq.push_back(matrix[i][j]);
            }


            for(int k = i + 1; k < rows - i; k++) {
                freq.push_back(matrix[k][cols - i - 1]);
            }


            if(rows - i - 1 > i) {
                for(int j = cols - i - 2; j >= i; j--) {
                    freq.push_back(matrix[rows - i - 1][j]);
                }
            }


            if(cols - i - 1 > i) {
                for(int k = rows - i - 2; k > i; k--) {
                    freq.push_back(matrix[k][i]);
                }
            }
        }

        return freq;
    }
};