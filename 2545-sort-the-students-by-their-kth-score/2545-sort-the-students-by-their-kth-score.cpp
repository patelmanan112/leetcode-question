class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> temp;
        unordered_map<int , int > mp;
        vector<vector<int>> ans (score.size());
        
        for(int i=0; i<score.size() ; i++){
            temp.push_back(score[i][k]);
            mp[score[i][k]] = i;
            
        }
        sort(temp.rbegin() , temp.rend());

     for(int i=0; i<temp.size() ; i++){
        ans[i] = score[mp[temp[i]]];
     }
        return ans;
    }
};