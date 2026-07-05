class Solution {
public:
    int balancedStringSplit(string s) {
    int count =0;
    int sum =0;
    for(int i=0; i<s.size() ; i++){
        if(s[i] == 'L'){
            sum = sum -1;
        }
        else if( s[i] == 'R'){
            sum = sum + 1;
        }
        if(sum == 0){
            count++;
        }
    }
    return count;
    }
};