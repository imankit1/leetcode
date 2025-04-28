class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        int l=0, r=0;

        long long sum=0;
        long long cnt=0;
        while(r<n){
            sum+=nums[r];

            while(sum*(r-l+1)>=k){
                sum-=nums[l];
                l++;
            }
            if(sum*(r-l+1)<k){
                cnt+=(r-l+1);
            }
            r++;
        }

        return cnt;
    }
};