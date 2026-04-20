class Solution {
    public int maxDistance(int[] colors) {
        int n=colors.length;

        int res=Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    res=Math.max(res, Math.abs(j-i));
                }
            }
        }
        return res;
    }
}