class Solution {
    public int maxAdjacentDistance(int[] nums) {
        
        int maxDiff=Integer.MIN_VALUE;
        for(int i=0;i<nums.length-1;i++){
            maxDiff=Math.max(maxDiff, Math.abs(nums[i+1]-nums[i]));
        }
        maxDiff=Math.max(maxDiff, Math.abs(nums[0]-nums[nums.length-1]));
        return maxDiff;
    }
}