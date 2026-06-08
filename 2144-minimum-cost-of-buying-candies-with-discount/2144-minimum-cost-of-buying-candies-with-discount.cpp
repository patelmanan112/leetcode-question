class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin() , cost.end());
        int count =0;
        int check =0;
        for(int i=cost.size() -1; i>=0 ; i--){
            check++;
            if(check ==3){
                check =0;
                continue;
            }
            count += cost[i];
        }

        return count;
    }
};