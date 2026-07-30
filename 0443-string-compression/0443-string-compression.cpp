class Solution {
public:
    int compress(vector<char>& chars) {
    string ans;
   int count = 1;

for (int i = 1; i <= chars.size(); i++) {
    if (i < chars.size() && chars[i] == chars[i - 1]) {
        count++;
    } 
    else {
        ans += chars[i - 1];
        if (count > 1)
            ans += to_string(count);
        count = 1;
    }

}
    for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }
return ans.size();
    };
};