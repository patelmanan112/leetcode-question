class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int , int> mp;
        int temp = n;
        while(temp!=0){
            int upd = temp%10;
            mp[upd]++;
            temp = temp/10;
        }

        int sum =0;
        for(auto& it : mp){
             sum = sum + it.first * it.second;
        }

        return sum;
    }
};