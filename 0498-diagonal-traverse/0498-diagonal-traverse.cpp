class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int , vector<int>> freq;
        for(int i =0; i < mat.size(); i++){
            for(int j =0; j<mat[i].size(); j++){
                freq[i + j].push_back(mat[i][j]);
            }
        }
        vector<int> ans;
        for(auto& it : freq){
            if(it.first%2 !=0)
           { for(auto&sec :it.second ){
                ans.push_back(sec);
            }}
        
        else{
            for(int i = it.second.size() -1 ; i >=0; i--){
                 ans.push_back(it.second[i]);
            }
        }
        }
        return ans;   
    }
};