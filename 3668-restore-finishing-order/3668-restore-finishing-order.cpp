class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
    vector<int> mp;
    for(int i=0; i<order.size() ; i++){
        for(int j =0; j<friends.size() ; j++){
            if(order[i] == friends[j]){
                mp.push_back(order[i]);
            }
        }
    }
    return mp;
    }
};