class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int>mpp;
        int sum=0;
        int ans=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            while(mpp.find(nums[i])!=mpp.end()){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            sum+=nums[i];
            mpp[nums[i]]++;
            ans=max(ans, sum);
        }
        return ans;
    }
};