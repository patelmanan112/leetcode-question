class Solution {
public:
    int countSegments(string s) {
     int count =0;
   for(int i=0; i<s.size(); i++){
    if(s[i] != ' ' && i == s.size() -1){
        count++;
        break;
    }
    if(s[i] != ' ' && s[i+1] == ' '){
        count++;
    }
    else{
        continue;
    }
   }

   return count;
    }
};