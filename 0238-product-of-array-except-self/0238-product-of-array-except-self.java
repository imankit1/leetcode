//in O(n) T.C & O(n) S.C
class Solution {
    public int[] productExceptSelf(int[] arr) {
         int n=arr.length;
        int [] prefix=new int[n];
        int [] suffix=new int[n];
        int [] ans=new int[n];
        
        //prefix;
        prefix[0]=1;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*arr[i-1];
        }
        
        //suffix;
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*arr[i+1];
        }
        
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
}
// in O(n) T.C & O(1) S.C
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
