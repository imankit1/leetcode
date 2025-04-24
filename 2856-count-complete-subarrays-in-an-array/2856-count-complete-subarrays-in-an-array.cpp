class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i: nums) st.insert(i);

        int sizeOfDinstinctElement=st.size();
        // st.clear();
        int n=nums.size();
        int count=0;


        for(int i=0;i<=n-sizeOfDinstinctElement;i++){
            unordered_set<int>st2;
            for(int j=i;j<n;j++){
                st2.insert(nums[j]);
                if(st2.size()==sizeOfDinstinctElement) count++;
                if(st2.size()>sizeOfDinstinctElement) break;
            }
             
        }
        return count;
    }
};