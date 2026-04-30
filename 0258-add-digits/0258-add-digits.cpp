class Solution {
public:
    int addDigits(int num) {
        while( num> 9){
            int sum =0;
            int temp = num;
            while(temp!=0){
                int upd = temp%10;
                sum += upd;
                temp = temp/10;
            }
            num = sum;

        }

        return num;
    }
};