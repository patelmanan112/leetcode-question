class Solution {
public:
    bool check(string str1 , string str2){
        vector<bool> freq(26 , false);
        for(char ch : str1){
            freq[ch-'a'] = true;
        }
        for(char ch : str2){
            if(freq[ch-'a']){
                return false;
            }
        }
        return true;
    } 
    int maxProduct(vector<string>& words) {
        int maxi = 0;
        for(int i =0; i<words.size() -1 ; i++){
            for(int j = i+1 ; j<words.size() ; j++){
                int pro = words[i].size() * words[j].size();
                if(pro <= maxi){
                    continue;
                }
                else if(check(words[i] , words[j])){
                    maxi = max(maxi , pro);
                }
            }
        }
        return maxi;
    }
};