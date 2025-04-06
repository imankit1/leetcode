class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int>dp(n, 1);
        vector<int>pre_idx(n, -1);
        int maxii=1;
        int index=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        pre_idx[i]=j;

                    }
                    if(maxii<dp[i]){
                        maxii=dp[i];
                        index=i;
                    }
                }
            }
        }

        vector<int>ans;
        while(index!=-1){
            ans.push_back(nums[index]);
                   
            index= pre_idx[index];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};