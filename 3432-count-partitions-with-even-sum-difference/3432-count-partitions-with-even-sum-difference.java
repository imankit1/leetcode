class Solution {
    public int countPartitions(int[] nums) {
        int n=nums.length;
        int totalSum=0;
        for(int i=0;i<n;i++) totalSum+=nums[i];

        int leftSum=nums[0];
        int count=0;
        for(int i=1;i<n;i++){
            totalSum-=nums[i-1];

            if((leftSum-totalSum)%2==0) count++;
            leftSum+=nums[i];
        }
        return count;
    }
}