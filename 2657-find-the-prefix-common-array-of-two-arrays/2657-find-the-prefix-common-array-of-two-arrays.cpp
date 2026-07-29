class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
   unordered_set<int> Afreq;
unordered_set<int> Bfreq;
        vector<int> ans;
        for(int i=0; i<A.size() ; i++){
            int count =0;
            Afreq.insert(A[i]);
            Bfreq.insert(B[i]);
           for(auto& it : Afreq){
            if(Bfreq.find(it) != Bfreq.end()){
                count++;
            }
           }
            ans.push_back(count);
        }   
        return ans;
    }
};