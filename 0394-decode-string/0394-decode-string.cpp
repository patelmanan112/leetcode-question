// class Solution {
// public:

// string cal(int j , string s , int check){
//     string str1;
//  while(s[j] != ']'){
//     if(isalpha(s[j])){
//         str1 +=s[j];
//         j++;
//         continue;
//     }
//     else if( s[j] == '['){
//         check = s[j-1] -'0';
//         j++;
//        str1 += cal(j , s , check);
//     }
//  }
//  string temp ="";
//     for(int k=0; k<check; k++ ){
//         str1 += str1;
//     }
//     return str1;

// }
//     string decodeString(string s) {
//         string str;
//         for(int i =0; i<s.size() ; i++){
//             if(s[i] == '['){
//                  int check = s[i-1] -'0';
//                str += cal(i , s , check);
//             }
//         }
//         return str;
//     }
// };




class Solution {
public:
    string solve(string& s, int& i) {
        string result;
        while (i < s.size() && s[i] != ']') {
            if (isalpha(s[i])) {
                result += s[i++];
            }
            else if (isdigit(s[i])) {
                int num = 0;
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i++; 
                string decoded = solve(s, i);
                i++; 
                while (num--) {
                    result += decoded;
                }
            }
        }

        return result;
    }

    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};