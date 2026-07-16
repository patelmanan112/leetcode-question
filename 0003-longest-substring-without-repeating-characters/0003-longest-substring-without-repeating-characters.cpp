class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
        int right = 0;
        int left =0;
       int max_length = 0;
        unordered_set<char> str;
      while(right < s.size()){
        // fire 
        while(str.count(s[right])){
            str.erase(s[left]);
            left++;
        }

        // hire 
        str.insert(s[right]);
    max_length = max(max_length , right - left +1);
    right++;
      }
        return max_length;
    }
};