class Solution {
    public int countElements(int[] nums) {
        int n=nums.length;
        int result=0;
        for(int i=0;i<n;i++){
            int ele=nums[i];

            boolean isSmaller=false;
            boolean isGreater=false;
            for(int j=0;j<n;j++){
                if(nums[j]>ele) isGreater=true;
                else if(nums[j]<ele) isSmaller=true;
            }

            if(isSmaller && isGreater) result++;
        }

        return result;
    }
}