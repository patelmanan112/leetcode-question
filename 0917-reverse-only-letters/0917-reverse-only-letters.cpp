class Solution {
public:
    bool letter(char ch){
        return ch >= 'a' &&ch <= 'z' || ch >= 'A' && ch<= 'Z';
    }
    string reverseOnlyLetters(string s) {
        int i =0;
        int j = s.size();
        while( i<j){
            if(!letter(s[i])){
                i++;
            continue;
            }
            if(!letter(s[j])){
                j--;
              continue;
            }
            else{
                swap(s[i] , s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};