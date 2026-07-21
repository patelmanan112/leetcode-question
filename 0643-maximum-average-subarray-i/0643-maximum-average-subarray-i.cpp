class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg =0;
        double maxiu =INT_MIN;
        for(int i=0; i<k; i++){
            avg = avg + nums[i];
        }
         maxiu = max(maxiu , avg);
        for(int i = k; i<nums.size() ; i++){
            avg = avg - nums[i-k] + nums[i] ;
            maxiu = max(maxiu , avg);
        }
    return maxiu/k;
    }
};
