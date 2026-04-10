class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp;
        unordered_map<string , vector<string>> ana;
    for(string word : strs){
        temp = word;
        sort(temp.begin() , temp.end());
        ana[temp].push_back(word);
     
    }
    vector<vector<string>> vec;

    for(auto& it : ana){
        vec.push_back(it.second);
    }
    return vec;
    }
};