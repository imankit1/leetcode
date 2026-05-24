class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(auto &i : nums) mp[i]++;

        vector<int>res;
        for(int i = 0;i < nums.size();i++){
            if(mp[nums[i]] <= k){
                res.push_back(nums[i]);
            }
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
        }
        return res;
    }
};