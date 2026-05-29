class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        char cha;
        for(int i =0; i<word.size() ; i++){
            if( word[i] >= 'A'  && word[i] <= 'Z'){
                count++;
                cha = word[i];
            }
        }

        if(count == word.size()){
            return true;
        }
        if(count == 1 && cha == word[0]){
            return true;
        }

        else if( count ==0){
            return true;
        }


        return false;
    }
};