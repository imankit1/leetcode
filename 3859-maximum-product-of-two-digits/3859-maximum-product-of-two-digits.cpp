class Solution {
public:
    int maxProduct(int n) {
        vector<int>v(10, 0);
        while(n>0){
            int t=n%10;
            v[t]++;
            n/=10;
        }
        int maxii1=0;
        int maxii2=0;
        for(int i=9;i>=0;i--){
            if(v[i]>0){
                maxii1=max(maxii1, i);
            }
            if(v[i]>0 && i!=maxii1){
                maxii2=max(maxii2, i);
            }
        }
        if(v[maxii1]>1) return maxii1*maxii1;
        return maxii1*maxii2;
    }
};