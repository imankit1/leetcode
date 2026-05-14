class Solution {
    public boolean isGood(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        for(int i = 0;i < nums.length;i++){
            if(i == n-2 && nums[i] != n-1) return false; 
            else if(i == n-1 &&  nums[i] != n-1) return false;
            else if( i< n-2 && nums[i] != i+1) return false;

        }

        return true;
    }
}