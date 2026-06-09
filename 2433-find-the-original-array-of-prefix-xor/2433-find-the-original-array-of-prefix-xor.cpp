class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> or1;
        or1.push_back(pref[0]);
        for(int i=1; i<pref.size() ; i++){
            int temp = pref[i-1]^ pref[i];
            or1.push_back(temp);
        }

        return or1;
    }
};