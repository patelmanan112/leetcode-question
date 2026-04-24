class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int length = word1.size() >= word2.size() ?  word1.size() :  word2.size();
        for(int i=0; i<length ; i++){
            if(word1.size()> i){
                str += word1[i];
            }
            if(word2.size()>i ){
                str += word2[i];
            }
        }
    return str;
    }
};