class Solution {
    public int[] countOppositeParity(int[] nums) {
        int n = nums.length;
        int[] res = new int[n];
        for(int i = 0;i < n;i++){
            int cntEven = 0, cntOdd = 0;
            
            for(int j =i + 1;j < n;j++){
                if(nums[j]%2 == 0) cntEven++;
                else cntOdd++;
            }
            if(nums[i]%2 == 0) res[i] = cntOdd;
            else res[i] = cntEven;
        }
        return res;
    }
}