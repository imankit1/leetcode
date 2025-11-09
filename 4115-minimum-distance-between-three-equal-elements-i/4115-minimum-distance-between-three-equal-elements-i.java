class Solution {
    public int minimumDistance(int[] nums) {
        int mini=Integer.MAX_VALUE;
        int n=nums.length;
        for(int i=0;i<n;i++){
            int a=nums[i];
            for(int j=i+1;j<n;j++){
                int b=nums[j];
                if(a==b){
                    int k=j+1;
                    while(k<n){
                        if(nums[k]==b){
                            int val=Math.abs(i-j)+Math.abs(j-k)+Math.abs(k-i);
                            mini=Math.min(mini, val);
                        }
                        k++;
                    }
                }
            }
        }
        return mini==Integer.MAX_VALUE ? -1 : mini;
    }
}