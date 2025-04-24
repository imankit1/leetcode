class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i: nums) st.insert(i);

        int sizeOfDinstinctElement=st.size();
         
        int n=nums.size();
        int count=0;
        int l=0, r=0;
        unordered_map<int, int>mpp;
        while(r<n){
            mpp[nums[r]]++;
            
            while(l<=r && mpp.size()==sizeOfDinstinctElement){
               
                count+=(n-r);
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            r++;
        }
        
        return count;
    }
};