//recursive approach
class Solution {
public:
    int helprob(vector<int>& nums, int idx){
        //base case
        if(idx>=nums.size()){
            return 0;
      
        int takehouse=nums[idx]+helprob(nums, idx+2);
        int not_takehouse=helprob(nums, idx+1);

        return max(takehouse, not_takehouse);
    }
    int rob(vector<int>& nums) {
         
        return helprob(nums, 0);
    }
};
// ------------------------------------------------------------------------------------------------------------------------------------------------
//memoization
class Solution {
public:
    int helprob(vector<int>& nums, int idx, vector<int>& dp){
        //base case
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1) return dp[idx];
        int takehouse=nums[idx]+helprob(nums, idx+2, dp);
        int not_takehouse=helprob(nums, idx+1, dp);

        return dp[idx]=max(takehouse, not_takehouse);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
         vector<int>dp(n, -1);
        return helprob(nums, 0, dp);
    }
};
