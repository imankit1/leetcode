class Solution {
public:

bool  help(vector<int>&nums , int i,   int target, vector<vector<int>>&dp){
    if(i>=nums.size()){
        if(target==0) return true;
         return false;
     }
     if(target<0) return false;
     if(dp[i][target]!=-1) return dp[i][target];
      bool take=help(nums,   i+1, target-nums[i],   dp);
      bool not_take= help(nums,   i+1, target,  dp);

      
      return dp[i][target]=take || not_take;
}
      bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sumii=accumulate(nums.begin(), nums.end(),0);
        if(sumii%2==1) return false;
        int target=sumii/2;
       
        int i=0;

        vector<vector<int>>dp(n+1, vector<int>(target+1, 0));
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=target;j++){
                    bool take=0;
                if(j-nums[i]>=0) 
                  take=dp[i+1][j-nums[i]];
                  bool not_take=dp[i+1][j-0];

                  dp[i][j]=take or not_take;

            }
        }
         return  dp[0][target];
    }
};