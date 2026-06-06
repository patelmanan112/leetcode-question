class Solution {
public:
    string removeDuplicates(string s, int k) {
        int count = 0;
        string res = "";
        for(char ch : s){
            if(!res.empty() && res.back() == ch){
                res.push_back(ch);
                count++;
            }
            else{
                res.push_back(ch);
                count = 1;
            }
            if(k == count){
                res.erase(res.end()-k,res.end());
                if(!res.empty()){
                    char ch = res.back();
                    count = 0;
                    for(int i  = res.size()-1; i>=0 && res[i] == ch; i--){
                        count++;
                    }
                }
            }
        }
        return res;
    }
};