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

      
      return dp[i][target]=take or not_take;
}
      bool canPartition(vector<int>& nums) {
        int sumii=accumulate(nums.begin(), nums.end(),0);
        if(sumii%2==1) return false;
        int target=sumii/2;
       
        int i=0;

        vector<vector<int>>dp(nums.size(), vector<int>(target+1, -1));
         return help(nums,  i,   target, dp);  
    }
};