class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxium =0;
        vector<bool> vp;
        for(int i=0;  i<candies.size() ; i++){
            maxium = max(maxium , candies[i]);
        }
        for(int i=0; i<candies.size() ; i++){
            if(candies[i] + extraCandies >= maxium){
                vp.push_back(true);
            }
            else{
                vp.push_back(false);
            }
        }
        return vp;
    }
};