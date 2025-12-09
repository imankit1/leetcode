class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD=1000000007;
        unordered_map<int, int>mp1;
        unordered_map<int, int>mp2;
        for(auto i:nums) mp2[i]++;


        long long cnt=0;
            mp1[nums[0]]++;
            mp2[nums[0]]--;

            if(mp2[nums[0]]==0) mp2.erase(nums[0]);
        for(int i=1;i<nums.size()-1;i++){   
            mp2[nums[i]]--;
            if(mp2[nums[i]]==0) mp2.erase(nums[i]);

            long long val=nums[i]*2LL;
            if(mp1.find(val)!=mp1.end() && mp2.find(val)!=mp2.end()){
                    cnt=(cnt+(mp2[val]*1LL*mp1[val])%MOD)%MOD;
                   
            }
            mp1[nums[i]]++;

        }
        return cnt%MOD;
    }
};