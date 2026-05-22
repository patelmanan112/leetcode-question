class Solution {
public:

    int sumSquare(int n) {
        if (n == 0)
            return 0;

        int digit = n % 10;
        return digit * digit + sumSquare(n / 10);
    }

    bool isHappy(int n) {
        if (n == 1)
            return true;
        if (n == 4)
            return false;
        return isHappy(sumSquare(n));
    }
};