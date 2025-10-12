class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int>mp;

        for(auto i: nums) mp[i]++;

        int ans=0;

        for(auto i:mp){
            if(i.second%k==0) ans+=(i.first*i.second);
        }

        return ans;
    }
};