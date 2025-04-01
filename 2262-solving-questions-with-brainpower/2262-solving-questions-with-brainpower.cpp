//  using tabulation method
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

//using recursion and memoization

class Solution {
public:

    long long help(int idx, vector<vector<int>>& q, vector<long long>&dp){
        //base case
        if(idx>=q.size()){
            return 0;
        }
        if(dp[idx]!=-1) return dp[idx];
        long long  taken=q[idx][0]+help(idx+q[idx][1]+1, q, dp);
        long long not_taken=help(idx+1, q, dp);
        return dp[idx]=max(taken, not_taken);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n=questions.size();
        vector<long long>dp(n+1, -1);
         return  help(0, questions, dp);
    }
};

