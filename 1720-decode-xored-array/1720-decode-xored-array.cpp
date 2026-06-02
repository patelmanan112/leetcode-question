class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        int value = encoded[0]^first;
        ans.push_back(first);
        ans.push_back(value);
        for(int i=1; i<encoded.size() ; i++){
          int value2 =  value^ encoded[i];
          ans.push_back(value2);
          value = value2;
        }

        return ans;
    }
};