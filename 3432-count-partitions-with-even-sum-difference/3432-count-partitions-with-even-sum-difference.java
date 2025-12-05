class Solution {
    public int countPartitions(int[] nums) {
        int n=nums.length;
            int count=0;
            int sumLeft=0;
        for(int i=0;i<n-1;i++){
            sumLeft+=nums[i];
            int sumRight=0;
            for(int j=i+1;j<n;j++){
                sumRight+=nums[j];
            }
            if((sumLeft-sumRight)%2==0) count++;
        }
        return count;
    }
}