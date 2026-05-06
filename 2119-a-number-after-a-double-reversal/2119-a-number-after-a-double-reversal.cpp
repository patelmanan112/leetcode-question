class Solution {
public:
    bool isSameAfterReversals(int num) {
  int reverednum =0;
  int temp = num;
  while(temp!=0){
    int upd = temp%10;
    reverednum = reverednum*10 + upd;
    temp = temp/10;

  }

  return to_string(reverednum).size() == to_string(num).size() ? true : false;
    }
};