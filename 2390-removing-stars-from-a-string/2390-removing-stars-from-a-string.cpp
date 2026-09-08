class Solution {
public:
    string removeStars(string s) {

        // for(int i = 0; i<s.size() ; i++){
        //     if(s[i] == '*'){
        //         s.erase(i - 1  , 2);
        //         i = i-2;
        //     }
        // }
        // return s;
        string ans;
        stack<char> sta;
        for(char it : s){
            if(it == '*'){
                sta.pop();
            }
            else{
                sta.push(it);
            }
        }
        while(!sta.empty()){
            ans +=  sta.top();
            sta.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};