class Solution {
public:
    int fun(vector<int>& nums, vector<int>& temp){
        int maxii=-1;
        for(int i=0;i<nums.size();i++){
            maxii=max(maxii, temp[i]-nums[i]);
        }
        return maxii==0 ? -1 : maxii;
    }
    int f(vector<int>& nums){
        int maxii=-1;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j])
                maxii=max(maxii, nums[j]-nums[i]);
            }
        }
        return maxii;
    }
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        int maxii=nums[n-1];
        for(int i=n-1;i>=0;i--){
            maxii=max(maxii, nums[i]);
            temp[i]=maxii;
        }
        //  return f(nums);
         return fun(nums, temp);
    }
};