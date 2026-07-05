class Solution {
public:
    int compareVersion(string version1, string version2) {
        
    int i=0;
    int k=0;

    while( i < version1.size() || k < version2.size()){
        long long value1 =0;
        long long value2 =0;
        while( i < version1.size() && version1[i] != '.'){
            value1 = value1*10 + (version1[i] - '0');
            i++;

        }
        while( k < version2.size() && version2[k] != '.'){
            value2 = value2*10 + (version2[k] - '0');
            k++;
        }

        if(value1 > value2){
            return 1;
        }
        else if(value2 > value1){
            return -1;
        }

        i++;
        k++;
    }
    
    return 0;
    
    }

};