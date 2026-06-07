class Solution {
public:
    int totalMoney(int n) {
        int count =0;
        int monday =1;
        int day =monday;
        for(int i=1; i<=n; i++){
                if((i -1)%7==0 && i!=1){
                    monday++;
                    day = monday;
                }
              
                count = count + day;
                  day++;

        }

        return count;
    }
};