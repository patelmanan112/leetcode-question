class Solution {
public:
    int countAsterisks(string s) {
      int count =0;
      int check =0;
      for(int i=0; i<s.size() ; i++){
        if(check%2==0){
            if(s[i] == '*'){
                count++;
            }
        }
     if(s[i] == '|'){
        check++;
    }

      }

      return count;
    }
};