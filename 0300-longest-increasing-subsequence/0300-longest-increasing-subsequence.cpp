class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxii = 1;
        vector<int> dp(n + 1, 1);
        for (int i = 1; i < n; i++) {

            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    if (dp[i] < dp[j] + 1) {
                        dp[i] = dp[j] + 1;
                    }
                    if (maxii < dp[i]) {
                        maxii = dp[i];
                        
                    }
                }
            }
        }
            return maxii;
        }
    };