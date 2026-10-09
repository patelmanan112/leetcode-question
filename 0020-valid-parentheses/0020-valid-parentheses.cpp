class Solution {
public:
    bool isValid(string s) {
        vector<int> ans;
        for(int i =0 ; i<s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                ans.push_back(s[i]);
            }
            else{
                 if(!ans.size()){
                    return false;
                }
                else if(s[i] == ']' && ans[ans.size()-1] == '['){
                    ans.pop_back();
                }
                else if(s[i] == '}' && ans[ans.size()-1] == '{'){
                    ans.pop_back();
                }
                else if(s[i] == ')' && ans[ans.size()-1] == '('){
                    ans.pop_back();
                }
                else{
                    return false;
                }
            }
        }

        if(ans.size()){
            return false; 
        }

        return true;
    }
};