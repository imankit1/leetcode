class Solution {
public:

    int solve(vector<int>& nums, int idx, int prev){
        if(idx>=nums.size()){
            return 0;
        }
        int take=0;
        if(prev==-1 || nums[prev]<nums[idx]){
            take=1+solve(nums, idx+1, idx);
        }

        int skip=solve(nums, idx+1, prev);

        return max(take, skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        return solve(nums, 0, -1);
    }
};