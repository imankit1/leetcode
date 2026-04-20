class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        auto comp= [](vector<int>&a, vector<int>&b){
            return a[2]>b[2];
        };
        sort(sources.begin(), sources.end(), comp);
        queue<pair<pair<int, int>, int>>pq;
        vector<vector<int>>visited(n, vector<int>(m, 0));
        vector<vector<int>>res(n, vector<int>(m));
        for(int i=0;i<sources.size();i++){
            pq.push({{sources[i][0], sources[i][1]}, sources[i][2]});
            visited[sources[i][0]][sources[i][1]]=-1;
        }

        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
            int a=it.first.first;
            int b=it.first.second;
            int v=it.second;
            //up
            res[a][b]=v;
            if(a>0 && visited[a-1][b]==0){
                res[a-1][b]=v;
                pq.push({{a-1, b}, v});
                visited[a-1][b]=-1;
            }
             // dowm
             if(a<n-1 && visited[a+1][b]==0){
                res[a+1][b]=v;
                pq.push({{a+1, b}, v});
                visited[a+1][b]=-1;
         
             }
             //left 
              if(b>0 && visited[a][b-1]==0){
                res[a][b-1]=v;
                pq.push({{a, b-1}, v});
                visited[a][b-1]=-1;
                 
             }

             //right
              if(b<m-1 && visited[a][b+1]==0){
                res[a][b+1]=v;
                pq.push({{a, b+1}, v});
                visited[a][b+1]=-1;
             }
            visited[a][b]=-1;
        }

        return res;
        
    }
};