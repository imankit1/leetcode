class Solution {
public:
    int MOD=1000000007;
    int concatenatedBinary(int n) {
        long long bit=0;
        long long result=0;
        for(int num=1;num<=n;num++){
            if((num&(num-1))==0) bit++;
            result=((result<<bit) %MOD + num)%MOD;
        }
        return result;
    }
};