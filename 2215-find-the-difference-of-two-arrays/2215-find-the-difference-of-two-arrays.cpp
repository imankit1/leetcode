class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int,int> mp2;

        for(auto &i:nums1) mp1[i]++;
        for(auto &j:nums2) mp2[j]++;

        vector<vector<int>>ans;
        vector<int>res;
        for(auto &k:mp1){
            if(mp2[k.first] == 0) res.push_back(k.first);
        }
        ans.push_back(res);

        res.clear();
        for(auto &k:mp2){
            if(mp1[k.first] == 0) res.push_back(k.first);
        }
        ans.push_back(res);

        return ans;

    }
};