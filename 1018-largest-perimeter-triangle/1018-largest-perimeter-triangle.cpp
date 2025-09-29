class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans=0;
        for(int i=1;i<nums.size()-1;i++){
            int a=nums[i-1], b=nums[i], c=nums[i+1];
            if(a+b>c && b+c>a && a+c>b) {
                ans=a+b+c;
            }
        }
        return ans;
    }
};