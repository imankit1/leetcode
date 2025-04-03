class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>p_max(n, 0);
        p_max[0]=nums[0];
        for(int i=1;i<n;i++){
            p_max[i]=max(p_max[i-1], nums[i]);
        }

        vector<int>s_max(n, 0);
        s_max[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--) s_max[i]=max(s_max[i+1], nums[i]);

        long long maxii=0;
        for(int i=1;i<n-1;i++){
            long long temp=(long long)(p_max[i-1]-nums[i])*s_max[i+1];
            maxii=max(maxii, temp);
        }
        return maxii;
    }
};