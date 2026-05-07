class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0) return false;

       long long   int res = 0;
        int temp = x;

        while(temp > 0) {
            int upd = temp % 10;
            res = res * 10 + upd;
            temp = temp / 10;
        }

        return res == x;
    }
};