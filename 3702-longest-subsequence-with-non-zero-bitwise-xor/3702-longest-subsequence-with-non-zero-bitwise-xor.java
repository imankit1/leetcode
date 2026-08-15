class Solution {
    public int longestSubsequence(int[] nums) {
        int l = 0;
        int r = 0;
        int xor = 0;
        for(Integer i : nums){
            xor ^= i;
        }

        if(xor != 0) return nums.length;
 
        while(r < nums.length){
            
            if((xor ^ nums[r]) != 0){
                return nums.length - 1;
            }
            r++;
        }
        return 0;
    }
}