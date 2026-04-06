class Solution {
    private:
    void dfs(vector<int>&visited, vector<vector<int>>&adj, stack<int>&st, int node){
    visited[node]=1;
    for(auto it:adj[node]){
        if(!visited[it]) dfs(visited, adj, st, it);
    }

    st.push(node);
}
 
public:

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto &i: prerequisites){
            adj[i[1]].push_back(i[0]);
        }
        int V=numCourses;
        vector<int>indegree(V, 0);

        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }

        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        vector<int>topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return topo.size()==V? true: false;
    }
};