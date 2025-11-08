class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxii=*max_element(nums.begin(), nums.end());
        int mini=*min_element(nums.begin(), nums.end());

        unordered_map<int, int>mpp;

        for(auto i:nums) mpp[i]++;

        vector<int>ans;
        for(int i=mini;i<=maxii;i++){
            if(mpp.find(i)==mpp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};