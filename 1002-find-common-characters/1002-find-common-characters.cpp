class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       for(int i =0;i<words[0].size();i++){
        for(int j = 1;j<words.size();j++){
            if(find(words[j].begin(),words[j].end(),words[0][i]) == words[j].end()){
                words[0].erase(words[0].begin()+i);
                i--;
                break;
            }
            else{
                int ind = words[j].find(words[0][i]);
                words[j].erase(words[j].begin()+ind);
            }
        }
       }
       vector<string> answer;
       for(int i = 0;i<words[0].size();i++){
        string core(1,words[0][i]);
        answer.push_back(core);
       }
       return answer;
    }
};