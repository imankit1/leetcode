class Solution {
public:
    bool checkPrime(int n){
        if (n==1) return false;
        if (n==2) return true;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        
        int ans=0;
        for(int i=left;i<=right;i++){
            int num=i;
            int cntSetBit= __builtin_popcount(num);
            if (checkPrime(cntSetBit)) ans++; 
        }
        return ans;
    }
};