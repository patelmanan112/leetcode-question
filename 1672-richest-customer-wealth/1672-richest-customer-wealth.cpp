class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int count =0;
        int maxium =0;
        for(int i=0; i<accounts.size() ; i++){
            count =0;
            for(int j=0; j<accounts[i].size() ; j++){
                count += accounts[i][j];
            }

            maxium = max(maxium , count);
        }

        return maxium;
    }
};