class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;
        int i=0, j=0;
        int res=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j] && i<=j){
                res=Math.max(res, (j-i));
                j++;
            }
            else if(nums1[i]>nums2[j]){
                i++;
            }
            else j++;
        }
        while(j<m){
            if(nums1[i-1]<=nums2[j]){
                res=Math.max(res, (j-i));
            }
            j++;
        }
        return res;
    }
}