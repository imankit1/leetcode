class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
         

        long long cost=0;
        if(n-k>0) cost+=1LL*(n-k)*k;
        if(m-k>0) cost+=1LL* (m-k)*k;
         return cost;
    }
};