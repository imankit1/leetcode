class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& edges) {
        vector<int>indegree(V, 0);
      vector<int>adj[V];
        
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        queue<int>q;
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        vector<int>topo;
        
        while(!q.empty()){
            int node = q.front();
               q.pop();
                topo.push_back(node);
            
            for(auto adjacencyNode : adj[node]){
                if(indegree[adjacencyNode] > 0) indegree[adjacencyNode]--;
                
                if(indegree[adjacencyNode] == 0){
                q.push(adjacencyNode);
                }
            }
        }
        reverse(topo.begin(), topo.end());
        if(topo.size() == V) return topo;
        return {};
    }
};