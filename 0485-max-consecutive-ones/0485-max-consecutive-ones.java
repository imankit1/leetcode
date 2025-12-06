class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {

        int cnt=0;
        int maxii=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                maxii=Math.max(maxii, cnt);
                System.out.println(maxii);
                cnt=0;
            } else cnt++;
        }

        maxii=Math.max(maxii, cnt);

        return maxii;

    }
}