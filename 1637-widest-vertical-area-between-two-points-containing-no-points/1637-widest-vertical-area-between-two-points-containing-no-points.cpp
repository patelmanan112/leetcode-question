class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int maxium = INT_MIN;
        sort(points.begin() , points.end());
        for(int i =0; i<points.size() -1;  i++){
            int sub = points[i +1][0] - points[i][0];
            maxium = max(sub , maxium);
        }
   return maxium;
    }

};