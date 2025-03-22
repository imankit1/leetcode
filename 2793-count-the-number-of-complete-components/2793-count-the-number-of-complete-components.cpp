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
        queue<int>q;
        for(int i=0;i<n;i++){
            if(!visited[i]){
            int e=0, v=0;
                q.push(i);
                visited[i]=true;
             while(!q.empty()){
              int front=q.front();
            //   visited[front]=true;
            q.pop();
            v++;
            e+=adj[front].size();
            for(auto neighbour: adj[front]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }
        }
        if(v*(v-1)==e) result++;
            }
            }
        return result;
    }
};