class Solution {
    public int compareBitonicSums(int[] nums) {
        int maxii=Integer.MIN_VALUE;
        for(int i=0;i<nums.length;i++){
            maxii=Math.max(maxii, nums[i]);
        }

        int i=0;
        long sumAsc=0, sumDesc=0;
        for(i=0;i<nums.length;i++){
            if(nums[i]==maxii){
                sumAsc+=nums[i];
                break;
            }
            sumAsc+=nums[i];
        }

        for(int j=i;j<nums.length;j++){
            sumDesc+=nums[j];
        }

        System.out.println(sumAsc+ " "+ sumDesc);
        if(sumAsc> sumDesc) return 0;
        if(sumAsc<sumDesc) return 1;
        return -1;
    }
}