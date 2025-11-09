class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>>mp;
        int n=nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int mini=INT_MAX;
        for(auto i:mp){
                vector<int>temp=i.second;
            int s=i.second.size();
            if(s>2){

                for(int k=0;k<s-2;k++){
                    int sum=abs(temp[k]-temp[k+1])+
                    abs(temp[k+1]-temp[k+2]) 
                    +abs(temp[k]-temp[k+2]);

                    mini=min(mini, sum);
                }
            }
        }
        return mini==INT_MAX ? -1: mini;
    }
};