class Solution {
public:
    int mod=1000000007;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long>num;
        for(auto i: nums) num.push_back(1LL*i);

        int res=0;
        for(auto i: queries){
            int l=i[0];
            int r=i[1];
            int k=i[2];
            int v=i[3];
            while(l<=r){
                num[l]=(num[l]*v)%mod;
                l+=k;
            }
        }
        for(auto i: num) res^=i;
        return res;
    }
};