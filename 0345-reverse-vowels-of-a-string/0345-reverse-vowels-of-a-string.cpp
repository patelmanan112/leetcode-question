class Solution {
public:
  bool check(char cha){
    cha = (char)tolower(cha);
    return cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha == 'u';
   }
    string reverseVowels(string s) {
   int i=0;
   int j= s.size()-1;
 
   while(i<j){
   while( i<j && !(check(s[i]))){
    i++;
   }
    while(i<j && !(check(s[j]))){
    j--;
    }
   if(i < j){
    char res = s[i];
    s[i] = s[j];
    s[j] = res;
    i++;
    j--;
   }
}
return s;
    }
};