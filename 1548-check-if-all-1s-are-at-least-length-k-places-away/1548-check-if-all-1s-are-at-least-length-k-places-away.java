class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int s=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1 && i-s-1<k && s>=0) return false;
            if(nums[i]==1){
                s=i;
            }
        }
        return true;
    }
}