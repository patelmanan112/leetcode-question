class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int mult = 1;
        int temp = n;
    while(temp!=0){
        int upd = temp%10;
        sum +=upd;
        mult *=upd;
        temp = temp/10;
    }
    return mult - sum;
    }
};