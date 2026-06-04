class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
     vector<int> arr;
     int value = encoded[0]^first;
     arr.push_back(first);
     arr.push_back(value);

     for(int i=1; i<encoded.size() ; i++){
        value = encoded[i]^value;
        arr.push_back(value);
     }
    return arr;
    }
};