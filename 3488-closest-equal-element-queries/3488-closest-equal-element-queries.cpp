class Solution {
public:
    int dis(vector<int> v, int ele, int n){
        if(v.size()<=1) return -1;
        int d=INT_MAX; 
        for(int i=0;i<v.size();i++){
            if(v[i]!=ele){
                d=min(d, min(abs(v[i]-ele), n-(abs(v[i]-ele))));
         
            }
        }
        return d;
    }
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        unordered_map<int, vector<int>>mp;  // ele, index
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
 
    
         vector<int> dist(n, -1);

        // process each group
        for (auto &it : mp) {
            vector<int> &v = it.second;
            int k = v.size();

            if (k == 1) continue;

            for (int i = 0; i < k; i++) {
                int curr = v[i];
                int next = v[(i + 1) % k];  // circular

                int d = abs(curr - next);
                d = min(d, n - d);

                // update both
                if (dist[curr] == -1) dist[curr] = d;
                else dist[curr] = min(dist[curr], d);

                if (dist[next] == -1) dist[next] = d;
                else dist[next] = min(dist[next], d);
            }
        }

        // answer queries
        vector<int> ans;
        for (int q : queries) {
            ans.push_back(dist[q]);
        }

        return ans;
    }
};