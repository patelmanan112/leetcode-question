class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum =0;
        int squareSum =0;
        int temp = n;
    while(temp!=0){
        int upd = temp%10;
        digitSum += upd;
        squareSum += upd * upd;
        temp = temp/10;
    }
    int sub = squareSum - digitSum;
    return sub>=50;
    }
};