class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0, r=0;
        int x=0;
        int maxii=1;
        int mask=0;
        while(r<nums.size()){
            while((mask&nums[r])!=0){
                mask=(mask^nums[l]);
                l++;
            }
            maxii=max(maxii, r-l+1);
            mask=(mask|nums[r]);
            r++;
        }
        return maxii;
    }
};