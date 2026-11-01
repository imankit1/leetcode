class Solution {
    public int minMoves(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        int operations = 0;
        for(int j = n - 1; j > 0; j--){
            operations += (nums[j] - nums[0]);
        }
        return operations;
    }
}