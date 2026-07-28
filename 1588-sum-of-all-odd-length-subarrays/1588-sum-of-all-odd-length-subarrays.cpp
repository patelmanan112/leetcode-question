class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for(int odd = 1; odd <= n; odd += 2) {
            int windowSum = 0;


            for(int i = 0; i < odd; i++) {
                windowSum += arr[i];
            }
            sum += windowSum;

            for(int i = odd; i < n; i++) {
                windowSum = windowSum - arr[i - odd] + arr[i];
                sum += windowSum;
            }
        }
        return sum;
    }
};