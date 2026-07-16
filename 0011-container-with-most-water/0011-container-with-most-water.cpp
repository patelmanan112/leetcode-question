class Solution {
public:
    int maxArea(vector<int>& height) {
        int right =0;
        int left =height.size() -1;
        int maxium = 0;
        while(right<left){
            int area =0;
            int minumum = min(height[right] , height[left]);
            int diff = left -right;
             area = diff * minumum;
             maxium = max(maxium , area);
             if(height[left]>height[right]){
                  right++;
             }
           
            else{
                left--;
            }
        }

        return maxium;
    }
};