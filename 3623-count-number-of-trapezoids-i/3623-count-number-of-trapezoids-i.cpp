class Solution {
public:
    int MOD=1000000007;
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, vector<int>>mp;

        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            mp[y].push_back(x);
        }

        long long ans=0;
        long long cnt=0;
        for(auto i:mp){
            long long t=i.second.size();
             
             
           long long v= t*(t-1)/2;
             ans+=v*cnt;
             cnt+=v;
        }
        if(mp.size()==1) return 0;

        return ans%MOD;
    }
};