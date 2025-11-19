class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, int>mp;

        for(auto i: nums) mp[i]++;
        int ans=original;
        while(mp.find(ans)!=mp.end()){
            ans=ans*2;
        }
        return ans;
    }
};