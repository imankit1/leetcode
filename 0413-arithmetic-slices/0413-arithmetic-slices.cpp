class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int res = 0;
        if(nums.size() < 3) return 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i ; j < nums.size()-2; j++){
                if((nums[j+1] - nums[j]) == (nums[j+2] - nums[j+1])){
                    res++;
                }
                else break;
            }
        }
        return res;
    }
};