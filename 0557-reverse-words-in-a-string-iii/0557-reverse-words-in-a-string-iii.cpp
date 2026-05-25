class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";

        for (char ch : s) {
            if (ch == ' ') {
                reverse(word.begin(), word.end());
                ans += word + " ";
                word = "";
            } else {
                word += ch;
            }
        }
        reverse(word.begin(), word.end());
        ans += word;

        return ans;
    }
};