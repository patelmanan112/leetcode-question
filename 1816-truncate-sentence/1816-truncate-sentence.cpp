class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> vp;
        string sample;
        string res;
        for(int i=0; i<s.size() ; i++){
            if(s[i] == ' '){
                vp.push_back(sample);
                sample = "";
            }
            
            sample +=s[i];
        }
    vp.push_back(sample);
      for(int i=0; i<k ; i++){
       
        res += vp[i];
      }

      return res;
    }
};