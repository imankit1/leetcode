class Solution {
public:
    long long mod=1000000007;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int res=0;
        for(auto &i: queries){
            int l=i[0];
            int r=i[1];
            int k=i[2];
            int v=i[3];
            while(l<=r){
                nums[l]=(1LL*nums[l]*v)%mod;
                l+=k;
            }
        }
        for(auto &i: nums) res^=i;
        return res;
    }
};