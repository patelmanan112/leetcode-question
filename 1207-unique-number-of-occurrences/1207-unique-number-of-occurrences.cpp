class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int , int> mp;
        unordered_set<int> vec;
        for(int i=0; i<arr.size() ;  i++){
            mp[arr[i]]++;
        }
        for(auto& id : mp){
            vec.insert(id.second);
        }
        return vec.size() == mp.size() ? true : false;
    }
};