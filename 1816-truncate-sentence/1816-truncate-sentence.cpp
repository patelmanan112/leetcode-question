class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v;
        string day;
        string res;
        for(int i=0; i<s.size() ; i++){
            if(s[i] == ' '){
                v.push_back(day);
                day = "";
            }
            day += s[i];
        }
        v.push_back(day);

        for(int i=0; i<k ; i++){
            res += v[i];
        }


        return res;
    }
};