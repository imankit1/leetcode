class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0) return false;

        unordered_map<int, int>mpp;
        for(auto &num : nums){
            mpp[num]++;
        }

        int partion =n/k;
        for(auto i:mpp){
            if(i.second>partion) return false;
        }
        return true;
        
    }
};