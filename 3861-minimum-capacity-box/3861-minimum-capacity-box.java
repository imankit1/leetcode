class Solution {
    public int minimumIndex(int[] capacity, int itemSize) {
        int n=capacity.length;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(capacity[i]>=itemSize){
                mini=Math.min(mini, capacity[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(capacity[i]==mini) return i;
        }
        return -1;
    }
}