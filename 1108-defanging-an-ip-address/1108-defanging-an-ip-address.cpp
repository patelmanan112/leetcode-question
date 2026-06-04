class Solution {
public:
    string defangIPaddr(string address) {
       string sample = "[.]";
       string ans;
       for(int i=0; i<address.size(); i++){
            if(address[i] == '.'){
                    ans +=sample;
            }
            else{
                ans += address[i];
            }
       } 
       return ans;
    }
};