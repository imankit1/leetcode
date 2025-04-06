
// recursive method
class Solution {
public:
    void check(vector<int>& nums, vector<int>& temp, int prev, int& maxii, int i){
        if(i>=nums.size()){
            if(maxii<temp.size()){
                maxii=temp.size();
            }
                return;
        }

            if(prev<nums[i]){
                temp.push_back(nums[i]);
                check(nums, temp, nums[i], maxii, i+1);
                temp.pop_back();
            }
            check(nums, temp, prev, maxii, i+1);
        }
    int lengthOfLIS(vector<int>& nums) {
        vector<int>temp;
        int prev=INT_MIN;
        int maxii=1;
        check(nums, temp, prev, maxii, 0);
        return maxii;
    }
};
//  tabulation method

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
