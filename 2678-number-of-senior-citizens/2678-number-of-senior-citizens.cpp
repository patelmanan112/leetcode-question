class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0;
        for(int i =0; i<details.size() ; i++){
           int age1 = details[i][11] - '0';
           int age2 = details[i][12] - '0';
           int age = age1*10 + age2;
           if(age >60){
            count++;
           }
        }
        return count;
    }
};