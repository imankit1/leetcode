class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l=0, r=0;
        int n=nums.size();
        int maxEle=*max_element(nums.begin(), nums.end());
        int cnt=0;
        long long ans=0;
        while(r<n){
            if(nums[r]==maxEle){
                cnt++;
            }
           while(cnt==k && l<=r){
            ans+=(n-r);
            if(nums[l]==maxEle) cnt--;
            l++;
           }
            r++;
        }
        return ans;
    }
};