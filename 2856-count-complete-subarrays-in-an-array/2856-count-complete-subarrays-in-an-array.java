class Solution {
    public int countCompleteSubarrays(int[] nums) {
        int n=nums.length;

        Set<Integer>st=new HashSet<>();
        for(int i=0;i<n;i++) st.add(nums[i]);
        int distintSize=st.size();
        st.clear();

        int cnt=0;
        for(int i=0;i<=n-distintSize;i++){
            for(int j=i;j<n;j++){
                st.add(nums[j]);
                if(st.size()==distintSize) cnt++;
                if(st.size()>distintSize) break;
            }
            st.clear();
        }
        return cnt;
    }
}