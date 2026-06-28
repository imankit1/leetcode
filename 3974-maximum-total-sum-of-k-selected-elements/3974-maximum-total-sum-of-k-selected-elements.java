class Solution {
    public long maxSum(int[] nums, int k, int mul) {
        
        int n = nums.length;
        long res = 0;
        Arrays.sort(nums);
        for(int i = n-1;i >= (n-k); i--){
            long num = nums[i];
            res += num*mul;
            mul--;
            if(mul == 0) mul = 1;
        }
        return res;
    }
}