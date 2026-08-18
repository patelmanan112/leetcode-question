class Solution {
public:
    long long sumAndMultiply(int n) {
        long long mul = 1;
        long long  add  =0;
        long long count =0;
        string sum = to_string(n);
        for(int i =0; i<sum.size() ; i++){
            if(sum[i] =='0'){
                continue;
            }
            add = add + sum[i] - '0';
            count = count * 10 + sum[i] - '0'; 
        }

        mul = count * add ;
    return mul;
    }
};