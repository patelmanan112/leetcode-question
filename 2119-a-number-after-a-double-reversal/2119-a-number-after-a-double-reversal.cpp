class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev;
        int temp = num;
        while(temp!=0){
            int upd = temp%10;
            rev = rev*10 + upd;
            temp = temp/10;
        }

        return to_string(rev).size() == to_string(num).size() ? true : false;
    }
};