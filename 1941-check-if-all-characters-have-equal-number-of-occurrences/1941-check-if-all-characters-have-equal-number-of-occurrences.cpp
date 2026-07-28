class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char , int> freq;
        int maxium =0;
        for(int i =0; i<s.size() ; i++){
            freq[s[i]]++;
            maxium = max(maxium , freq[s[i]]);
        }

        for(auto & it : freq){
            if(it.second != maxium){
                return false;
            }
        }
        return true;
    }
};