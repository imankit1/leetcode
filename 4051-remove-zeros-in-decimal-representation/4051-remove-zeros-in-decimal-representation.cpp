class Solution {
public:
    long long removeZeros(long long n) {
        long long ans=0;
        while(n>0){
            int x=n%10;
            if(x>0) {
                ans=ans*10+x;
            }
            n/=10;
        }
        long long final_ans=0;
        while(ans>0){
            int v=ans%10;
            final_ans=final_ans*10+v;
            ans/=10;
        }
        
        return final_ans;
    }
};