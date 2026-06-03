class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int , int> mp;
        int i=0;
        int sum =0;
        while(n!=0){
            int upd = n%10;
            mp[upd]++;
            n = n/10;
        }
        for(auto& it : mp){
            sum += it.first * it.second;
        }

        return sum;
    }
};