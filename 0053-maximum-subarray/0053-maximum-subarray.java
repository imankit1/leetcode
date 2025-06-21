class Solution {
    public int maxSubArray(int[] nums) {
        int sum=0;
        int ans=nums[0];
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
            if(sum<0) sum=0;
            else ans=Math.max(ans, sum);
        }
        return ans;
    }
}