class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        

        int res=INT_MAX;
        for(auto &i:mp){
            int n=i.second.size();
            if(n>2){
            for(int k=0;k<n-2;k++){
             int dis=abs(i.second[k]-i.second[k+1])+
             abs(i.second[k+1]-i.second[k+2])+abs(i.second[k+2]-i.second[k]);
             res=min(res, dis);
            }
            }
        }

        return res==INT_MAX ? -1 : res;
    }
};