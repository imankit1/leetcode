typedef long long ll;
class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        int n=q.size();
        vector<ll>dp(n+1, 0);
        for(int i=n-1;i>=0;i--){
            ll take=q[i][0];
            if(i+q[i][1]+1<n){
                take+=dp[i+q[i][1]+1];
            }
            
            ll not_taken=dp[i+1];
            dp[i]=max(not_taken, take);
            
        }
        return dp[0];
    }
};