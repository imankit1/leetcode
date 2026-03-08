class Solution {
    public int smallestBalancedIndex(int[] nums) {
        int n=nums.length;
        int[] sum=new int[n];
        int[] prod=new int[n+1];
        sum[0]=nums[0];
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+nums[i];
        }
        prod[n]=1;
        for(int i=n-1;i>=0;i--){
            prod[i]=prod[i+1]*nums[i];
        }
        for(int i=1;i<n;i++){
            if((sum[i-1])==(prod[i+1])) return i;
        }
        
        return -1;
    }
}