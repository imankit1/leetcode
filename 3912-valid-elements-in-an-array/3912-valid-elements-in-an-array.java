class Solution {
    public List<Integer> findValidElements(int[] nums) {
        int n=nums.length;
        int [] left= new int[n];
        int [] right= new int[n];
        int maxii=-1;
        for(int i=0;i<n;i++){
            left[i]=maxii;
            maxii=Math.max(maxii, nums[i]);
        }

        maxii=-1;
        for(int j=n-1;j>=0;j--){
            right[j]=maxii;
            maxii=Math.max(maxii, nums[j]);
        }
        List<Integer>res= new ArrayList<>();
        for(int i=0;i<n;i++){
            if(left[i]<nums[i] || right[i]<nums[i]){
                res.add(nums[i]);
            }
        }
        return res;

    }
}