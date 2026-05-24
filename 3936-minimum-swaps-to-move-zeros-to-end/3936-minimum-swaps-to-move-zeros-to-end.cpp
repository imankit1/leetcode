class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int cntZeros = 0;
        for(auto &i: nums){
            if(i == 0) cntZeros++;
        }

        int res = 0;
        for(int i = nums.size()-1;i >=0 ;i--){
            if(nums[i] == 0){
                cntZeros--;
            }
            else if(cntZeros>0){
                res++;
                cntZeros--;
            }
            if(cntZeros <= 0) break;
        }
        return res;
    }
};