class Solution {
public:
    
    char toLower(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        return ch;
    }
    char toUpper(char ch) {
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        return ch;
    }
    string capitalizeTitle(string title) {
        string word = "";
        string ans = "";
        for(int i = 0; i <= title.length(); i++) {
            if(i == title.length() || title[i] == ' ') {

                int len = word.length();
                for(int j = 0; j < len; j++) {
                    word[j] = toLower(word[j]);
                }
                if(len > 2) {
                    word[0] = toUpper(word[0]);
                }
                for(int j = 0; j < len; j++) {
                    ans += word[j];
                }
                if(i != title.length()) {
                    ans += ' ';
                }
                word = "";
            }
            else {
                word += title[i];
            }
        }
        return ans;
    }
};