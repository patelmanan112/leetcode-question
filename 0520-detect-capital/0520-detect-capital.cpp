class Solution {
public:
    bool detectCapitalUse(string word) {
        int count =0;
        char check;
        for(int i =0; i<word.size() ; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                check = word[i];
                count++;
            }
        }

        if(count ==0){
            return true;
        }
        if(count == 1 && check == word[0]){
            return true;
        }
        else if(count == word.size()){
            return true;
        }

        return false;
    }
};