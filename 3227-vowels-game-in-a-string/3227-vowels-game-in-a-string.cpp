class Solution {
public:
    bool doesAliceWin(string s) {
        for(int ch =0; ch <s.size() ; ch++){
            if(s[ch] == 'a' || s[ch] == 'e' || s[ch] == 'i' || s[ch] == 'o' || s[ch] == 'u'){
                return true;
            }



        }
    return false;
    }
};