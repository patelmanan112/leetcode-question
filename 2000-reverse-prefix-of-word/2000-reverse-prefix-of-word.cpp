class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index =0;
        for(int i=0 ; i < word.size() ; i++){
            if(word[i] == ch){
                index = i;
                break;
            }
        }
    int i=0;
    int j = index;
    if(j == 0){
        return word;
    }
    while(i<j){
        char sha = word[i];
        word[i] = word[j];
        word[j] = sha;
        i++;
        j--;
    }
    
    return word;
    }
};