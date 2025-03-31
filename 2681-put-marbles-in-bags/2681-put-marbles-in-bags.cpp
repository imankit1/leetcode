class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();

        vector<int>ans(n-1,0);
        for(int i=0;i<n-1;i++){
            ans[i]=weights[i]+weights[i+1];
        }

        sort(begin(ans), end(ans));

        long long maxii=0, mini=0;
        for(int i=0;i<k-1;i++){
            mini+=ans[i];
            maxii+=ans[n-1-1-i];
        }
        return maxii-mini;
    }
};