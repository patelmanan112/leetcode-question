class Solution {
public:
    int getLucky(string s, int k) {
        string res;
        for(int i=0; i<s.size() ; i++){
            int asc = s[i] - 'a' + 1;
            res += to_string(asc);
        }
        int sum =0;
        for(int j =0; j<k; j++){
            sum =0;
            for(int k =0; k<res.size() ; k++){
                sum += res[k] - '0';
            }
            res = to_string(sum);
        }

        return sum;

        
    }
};