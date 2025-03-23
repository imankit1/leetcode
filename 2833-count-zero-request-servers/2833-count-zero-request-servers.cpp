class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        vector<pair<int, int>>new_queries;
        for(int i=0;i<queries.size();i++) new_queries.push_back({queries[i], i});

        sort(new_queries.begin(), new_queries.end());

        sort(logs.begin(), logs.end(), [](const auto &a, const auto &b)
        {
            return a[1]<b[1];
        });

        vector<int>ans(queries.size(), 0);
        vector<int>mp(n+1, 0);

        int l=0, r=0;
        int unique_server=0;
        for(auto &j : new_queries){
            int time=j.first;
            int index=j.second;

            while(r<logs.size() && logs[r][1]<=time){
                if(mp[logs[r][0]]==0) unique_server++;

                mp[logs[r][0]]++;
                r++;
            }
            
             while(l<logs.size() && logs[l][1]<time-x){
                if(mp[logs[l][0]]==1) unique_server--;

                mp[logs[l][0]]--;
                l++;
            }
            ans[index]=n-unique_server;
        }

        return ans;
    }
};