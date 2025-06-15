class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i;
        }

        for(int i=0;i<nums.size();i++){
            int nikalo=target-nums[i];
            if(mpp.find(nikalo)!=mpp.end() && mpp[nikalo]!=i){
                return {i, mpp[nikalo]};
            }
        }
        return {0, 0};
    }
};