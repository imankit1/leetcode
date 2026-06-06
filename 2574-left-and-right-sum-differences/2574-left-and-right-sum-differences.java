class Solution {
    public int[] leftRightDifference(int[] nums) {
        int rightSum = 0;
        int n = nums.length;
        for(Integer i:nums) rightSum += i;

        int ans[] = new int[n];
        int leftSum = 0;
        for(int j = 0;j<n;j++){
            rightSum -= nums[j];
            ans[j] = Math.abs(leftSum-rightSum);
            leftSum += nums[j];
        }
        return ans;
        
    }
}