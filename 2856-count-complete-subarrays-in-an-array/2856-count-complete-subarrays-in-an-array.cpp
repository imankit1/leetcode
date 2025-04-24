class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i: nums) st.insert(i);

        int sizeOfDinstinctElement=st.size();
        st.clear();
        int n=nums.size();
        int count=0;


        for(int i=0;i<=n-sizeOfDinstinctElement;i++){
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                if(st.size()==sizeOfDinstinctElement) count++;
                if(st.size()>sizeOfDinstinctElement) break;
            }
            st.clear();
        }
        return count;
    }
};