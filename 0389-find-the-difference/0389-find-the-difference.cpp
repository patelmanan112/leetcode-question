class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int> vp1;
        unordered_map<char , int> vp2;

        for(int i=0; i<s.size() ; i++){
            vp1[s[i]]++;
        }

        for(int i=0; i<t.size() ; i++){
            vp2[t[i]]++;
        }


        for(int i =0; i<t.size() ; i++){
            if(vp1[t[i]] != vp2[t[i]]){
                return t[i];
            }
        }

        return '\0';
    }
};