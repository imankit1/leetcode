class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int l=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            while(mpp[nums[i]]>k){
                mpp[nums[l]]--;
                l++;
            }
            ans=max(ans, i-l+1);
        }
        return ans;
    }
};