class Solution {
public:
    int countCommas(int n) {
        int sub = n - 1000;

        if(sub < 0){
            return 0;
        }
        sub = sub +1;
        return sub;
    }
};