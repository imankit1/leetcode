class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        int l = 0, r = 1;
        while(r < n-1){
            if((nums[r] - nums[r-1]) == (nums[r + 1] - nums[r])){
                res++;
                if((r + 1 - l + 1) > 3){
                    res += (r + 1 - l + 1) - 3;
                }
            }
            else l = r + 1;

            r++;
        }
        return res;
    }
};



















