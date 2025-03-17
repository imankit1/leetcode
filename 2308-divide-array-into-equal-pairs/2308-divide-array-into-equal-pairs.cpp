class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto i:nums) mp[i]++;

        int pairs=0;
        for(auto i:mp){
            if(i.second%2==0 && i.second!=0){
                pairs+=i.second/2;
            }
        }
        if(pairs>=nums.size()/2) return true;
        return false;
    }
};