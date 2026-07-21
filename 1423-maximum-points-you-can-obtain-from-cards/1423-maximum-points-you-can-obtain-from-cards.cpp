class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum =0;
        for(int i=0; i<n; i++){
            sum = sum + cardPoints[i];
        }
        if(k == n){
            return sum;
        }
        int windowSize = n -k;
        int windowSum =0;
        for(int i=0; i <windowSize; i++){
            windowSum = windowSum + cardPoints[i];
        }
        int minWindow = windowSum;

        for(int i = windowSize; i<n; i++){
            windowSum = windowSum - cardPoints[i - windowSize] + cardPoints[i];

            minWindow = min(minWindow , windowSum);
        }

        return sum - minWindow;
    }
};