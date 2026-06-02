class Solution {
public:
    int mirrorDistance(int n) {
        int rev =0;
        int temp = n;
        while(temp!=0){
            int upd = temp%10;
            rev = rev*10 + upd;
            temp = temp/10;
        }
        int ans = abs( rev - n);
        return  ans;
    }
};