// recursive solution
class Solution {
public:
    int f(int idx, vector<int>& nums, int jump){
        if(idx>=nums.size()-1) return jump;
        int mini=INT_MAX;
        for(int i=1;i<=nums[idx];i++){
            mini=min(mini, f(i+idx, nums , jump+1));
        }
        return mini;
        
    }
    int jump(vector<int>& nums) {
        return f(0, nums, 0);
    }
};

// memoization
class Solution {
public:
    int f(int idx, vector<int>& nums, int jump, vector<vector<int>>&dp){
        if(idx>=nums.size()-1) return jump;
        if(dp[idx][jump]!=-1) return dp[idx][jump];
        int mini=INT_MAX;
        for(int i=1;i<=nums[idx];i++){
            mini=min(mini, f(i+idx, nums , jump+1, dp));
        }
        return dp[idx][jump]=mini;
        
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        return f(0, nums, 0, dp);
    }
};

// optimal solution

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        int jump=0;
        while(r<n-1){
            int farthat=0;
            for(int i=l;i<=r;i++){
                farthat=max(farthat, i+nums[i]);
            }

            l=r+1;
            r=farthat;
            jump++;
        }
        return jump;
    }
};
