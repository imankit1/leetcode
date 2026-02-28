class Solution {
public:
    int MOD=1000000007;
    int concatenatedBinary(int n) {
        long long result=0;
        for(int num=1;num<=n;num++){
            int digit=log2(num)+1; // kitne bit ka space chahiye.
            result=((result<<digit) %MOD + num)%MOD;
        }
        return result;
    }
};