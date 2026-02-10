class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();

        int maxCnt = 0;

        for(int j=0;j<n;j++){
        set<int> st_even;
        set<int> st_odd;
        for (int i = j; i < n; i++) {
            if (nums[i] % 2 == 0) {
                st_even.insert(nums[i]);
                
            } else if ( nums[i]%2!=0) {
                st_odd.insert(nums[i]);
                 
            }

            if (st_even.size()==st_odd.size()) {
                maxCnt = max(maxCnt, i-j+1);
            }
        }
        }
        return maxCnt;
    }
};