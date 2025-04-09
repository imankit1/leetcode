class Solution {
public:
     int solveMemo(vector<int>& nums, int i, vector<int>& dp){
        //base case
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        
        int currVal=nums[i];
        int currSum=nums[i];
        int index=i+1;
        while(index<nums.size() && currVal==nums[index]){
            currSum+=nums[index];
            index++;
        }

        while(index<nums.size() && nums[index]==currVal+1) index++;

        int take=currSum+solveMemo(nums, index, dp);
        int not_take=solveMemo(nums, i+1, dp);

        return dp[i]=max(take, not_take);
    }
    int solve(vector<int>& nums, int i){
        //base case
        if(i>=nums.size()) return 0;

        int currVal=nums[i];
        int currSum=nums[i];
        int index=i+1;
        while(index<nums.size() && currVal==nums[index]){
            currSum+=nums[index];
            index++;
        }

        while(index<nums.size() && nums[index]==currVal+1) index++;

        int take=currSum+solve(nums, index);
        int not_take=solve(nums, i+1);

        return max(take, not_take);
    }
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        sort(begin(nums), end(nums));
        int idx=0;
        // return solve(nums, idx);

        vector<int>dp(20001, -1);
        return solveMemo(nums, idx, dp);
    }
};