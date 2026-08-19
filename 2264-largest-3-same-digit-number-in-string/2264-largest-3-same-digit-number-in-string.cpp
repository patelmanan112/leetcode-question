class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int maxium = INT_MIN;
        for(int i =0; i<num.size() -2; i++){
            int digit = num[i] - '0';
            ans += num[i];
            if(num[i] == num[i +1]){
                  ans += num[i];
                if(num[i +1] == num[i+2]){
                     ans += num[i];
                    maxium = max(maxium , digit);
                }
            }
            ans = "";
        }
       if(maxium >=0){
        ans = ans  + to_string(maxium) + to_string(maxium) + to_string(maxium);
        return ans;
       }
       return "";
    }
};