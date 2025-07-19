class Solution {
public:
    int solve(vector<int>& jd, int n, int idx, int d, vector<vector<int>>&dp){
        if(d==1){
            int maxii=jd[idx];

            for(int i=idx; i<n;i++){
                maxii=max(maxii, jd[i]);
            }


            return dp[idx][d]=maxii;
        }
        if(dp[idx][d]!=-1) return dp[idx][d];
        int maxii= jd[idx];

        int finalResult=INT_MAX;

        for(int i=idx;i<=n-d;i++){
            maxii=max(maxii, jd[i]);

            int result=maxii+solve(jd, n, i+1, d-1, dp);

            finalResult=min(finalResult, result);
        }

        return dp[idx][d]=finalResult;
    }
    int minDifficulty(vector<int>& jd, int d) {
        int n=jd.size();
        if(n<d) return -1;

        vector<vector<int>>dp(n+1, vector<int>(d+1,-1));
        return solve(jd, n, 0, d, dp);
    }
};