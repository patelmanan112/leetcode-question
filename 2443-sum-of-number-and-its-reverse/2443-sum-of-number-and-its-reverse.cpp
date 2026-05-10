class Solution {
public:

    int reverse(int n){
        int res = 0;
        while(n>0){
            res = res*10 + (n%10);
            n = n/10;
        }

        return res;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=0; i<=num; i++){
            int ans = reverse(i);
            if( i + ans == num){
                return true;
            }
        }
    return false;
    }

};