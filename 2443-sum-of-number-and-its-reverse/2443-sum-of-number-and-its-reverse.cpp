class Solution {
public:
    int reverse(int n) {
        int rev = 0;
        
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        
        return rev;
    }

    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; i++) {
            int result = reverse(i);
            if (i + result== num) {
                return true;
            }
        }
        return false;
    }
};