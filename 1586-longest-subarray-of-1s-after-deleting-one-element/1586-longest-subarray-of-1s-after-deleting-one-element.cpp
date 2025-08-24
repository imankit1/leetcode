class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int r=0,l=0;
        int zeros=0;
        int cnt=0;
        
        while(r<nums.size()){
            if(nums[r]==0){
                zeros++;
                }
            while(zeros>1){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }

            cnt=max(cnt, r-l);
            r++;
        }
        return cnt==nums.size() ? cnt-1 : cnt;
    }
};