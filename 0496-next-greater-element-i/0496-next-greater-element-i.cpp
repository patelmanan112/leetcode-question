class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        int check =0;
      
        for(int i=0; i<nums1.size() ; i++){
            int temp = nums1[i];
              int nextGreat = -1;
            check =0;
            for(int j =0;j < nums2.size() ; j++){
                if( nums1[i] == nums2[j]){
                    check =1;
                }
                if(check ==1 && nums2[j] > nums1[i] ){
                    nextGreat = nums2[j];
                    break;
                }
            }
             answer.push_back(nextGreat);
        }
        return answer;
    }
};