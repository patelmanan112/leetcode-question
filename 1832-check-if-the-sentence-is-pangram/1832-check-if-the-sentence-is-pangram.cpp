class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char , int> ch;
        for(int i=0; i<sentence.size() ; i++){
            ch[sentence[i]]++;
        }

            return ch.size()==26 ? true : false ;
    }


};