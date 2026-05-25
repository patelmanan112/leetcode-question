class Solution {
public:
    bool isPalindrome(string s) {

        string res;

        for(int i = 0; i < s.size(); i++) {

            char ch = tolower(s[i]);

            if((ch >= 'a' && ch <= 'z') ||
               (ch >= '0' && ch <= '9')) {

                res += ch;
            }
        }
        int i = 0;
        int j = res.size() - 1;

        while(i < j) {

            if(res[i] != res[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};