class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(auto &i: nums){
            mp[i]++;
        }
        int i = k;
        while(i > 0){
            if(mp.find(i) == mp.end()) return i;
            i += k;
        }
        return i;
    }
};