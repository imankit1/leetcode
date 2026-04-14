class Solution {
    public int solveTarget(int[] nums, int target, int start){
        int res=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==target){
                res=Math.min(res, Math.abs(i-start));
            }
        }
        return res;
    }
    public int getMinDistance(int[] nums, int target, int start) {
        int ans=solveTarget(nums, target, start);

        return ans;
    }
}