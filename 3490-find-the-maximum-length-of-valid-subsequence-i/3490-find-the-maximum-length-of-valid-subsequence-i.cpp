class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int evenCount=0, oddCount=0;

        for(auto &n : nums){
            if(n%2==0) evenCount++;
            else oddCount++;
        }

        int parity=nums[0]%2;

        int cntParity=1;

        for(int i=1;i<nums.size();i++){
            int currParity=nums[i]%2;

            if(parity!=currParity){
                cntParity++;
                parity=currParity;
            }
        }


        return max(cntParity, max(evenCount, oddCount));
    }
};