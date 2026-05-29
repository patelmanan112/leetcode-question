class Solution {
public:
    double myPow(double x, int n) {
        
        long long Num = n;   
        double ans = 1.0;
        if (Num < 0) {
            x = 1 / x;
            Num = -Num;
        }

        while (Num > 0) {
            if (Num % 2 == 1) {
                ans = ans * x;
            }

            x = x * x;
            Num = Num / 2;
        }

        return ans;
    }
};