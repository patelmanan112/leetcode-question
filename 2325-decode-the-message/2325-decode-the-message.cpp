class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char ch = 'a';

        for (char c : key) {
            if (c != ' ' && mp.find(c) == mp.end()) {
                mp[c] = ch;
                ch++;
            }
        }

        string ans;

        for (char c : message) {
            if (c == ' ')
                ans += ' ';
            else
                ans += mp[c];
        }

        return ans;
    }
};