class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        for(int i=0; i<word.size() ; i++){

            if(word[i] == ch){
                index = i;
                break;
            }
        }
        if(index ==0){
            return word;
        }
    int i=0 ;
    int j =index;
    while( i<j){
        char saag = word[i];
        word[i] = word[j];
        word[j] = saag;
        i++;
        j--; 
    }

    return word;
    }
};