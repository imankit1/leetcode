class Solution {
    public int[] productExceptSelf(int[] arr) {
         int n=arr.length;
        
        int [] ans=new int[n];
        
        //prefix;
        ans[0]=1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*arr[i-1];
        }
        
        //suffix;
        int suffix=1;
        for(int i=n-2;i>=0;i--){
            suffix*=arr[i+1];
            ans[i]*=suffix;
        }
        
        
        return ans;
    }
}