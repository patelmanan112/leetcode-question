class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>> freq;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                freq[i + j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        bool lowtohigh=true;
        for (auto& it : freq) {
            if (!lowtohigh) {
                for (auto& sec : it.second) {
                    ans.push_back(sec);
                }
                
            }

            else {
                for (int i = it.second.size() - 1; i >= 0; i--) {
                    ans.push_back(it.second[i]);
                }
            }
            lowtohigh=!lowtohigh;
        }
        return ans;
    }
};