class Solution {
public:
    void help(vector<int>& nums, vector<vector<int>>& v, vector<int>&arr, int i){
    //    base case
        if(i==nums.size()){
            v.push_back(arr);
            return;
        }
        arr.push_back(nums[i]);
        help(nums, v, arr, i+1);
        arr.pop_back();
        help(nums, v, arr, i+1);

    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>arr;
        help(nums, v, arr ,0);

        int ans=0;

        for(auto i: v){
            int temp=0;
            for(auto j:i) temp^=j;
            ans+=temp;
        }
        return ans;
    }
};