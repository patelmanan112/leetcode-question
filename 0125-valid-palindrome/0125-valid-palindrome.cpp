class Solution {
public:
    bool isPalindrome(string s) {
       
        string res;
        for(int i=0; i<s.size() ; i++){
           char sa =(char)tolower(s[i]);
            if((sa >= 'a' && sa <= 'z') || (sa >= '0' && sa <='9')){
                res +=sa;
            }
        }
        int  i=0;
        int j= res.size() -1;

        while(i<=j){
            if(res[i] != res[j]){
                return false;
            }
            i++;
            j--;
        }

        return  true ;
    }
};