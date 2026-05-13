class Solution {
public:

    bool isLetter(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z');
    }

    string reverseOnlyLetters(string s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < right) {

            if(!isLetter(s[left])) {
                left++;
            }
            else if(!isLetter(s[right])) {
                right--;
            }
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};