class Solution {
public:
    void dfs( unordered_map<int, vector<int>>&adj, int &e, int &v, vector<bool>&visited, int node){
        visited[node]=true;
        v++;
        e+=adj[node].size();
        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(adj, e, v, visited, i);
            }
        }
    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>>adj;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n,false);
        int result=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                int node=i;
                int e=0;
                int v=0;
                dfs(adj, e, v, visited, node);
                if(v*(v-1)==e) result++;

            }
        }
        return result;
    }
};