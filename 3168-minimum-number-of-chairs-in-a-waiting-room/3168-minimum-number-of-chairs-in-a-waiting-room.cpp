class Solution {
public:
    int minimumChairs(string s) {
        int maxium = 0;
        int sum =0;
        for(int i=0; i<s.size() ; i++){
            if(s[i] == 'L'){
                sum = sum -1;
            }
            else {
                sum = sum + 1;
            }
            maxium = max(maxium , sum);
        }
        return maxium;
    }
};