class Solution {
public:
    
    bool isVowel(char ch) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            return true;
        return false;
    }

    string toGoatLatin(string sentence) {
        
        string ans = "";
        string word = "";
        int count = 1;

        for(int i = 0; i <= sentence.length(); i++) {
            if(i == sentence.length() || sentence[i] == ' ') {
                if(isVowel(word[0])) {
                    for(int j = 0; j < word.length(); j++) {
                        ans += word[j];
                    }
                }
                else {

                    for(int j = 1; j < word.length(); j++) {
                        ans += word[j];
                    }

                    ans += word[0];
                }

                ans += 'm';
                ans += 'a';

                for(int j = 0; j < count; j++) {
                    ans += 'a';
                }
                if(i != sentence.length()) {
                    ans += ' ';
                }
                word = "";
                count++;
            }
            else {
                word += sentence[i];
            }
        }
        return ans;
    }
};