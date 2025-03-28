class Solution {
public:

    vector<vector<int>>directions={{0,1},{0,-1}, {1,0}, {-1, 0}};
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        vector<int>result(queries.size());
        vector<pair<int, int>>sorted_queries;
        for(int i=0;i<queries.size();i++){
            sorted_queries.push_back(make_pair(queries[i], i));
        }

        sort(sorted_queries.begin(), sorted_queries.end());

        priority_queue<vector<int>, vector<vector<int>>, greater<>>pq;

        vector<vector<bool>>visited(grid.size(), vector<bool>(grid[0].size(), false));
        pq.push({grid[0][0], 0, 0});
        visited[0][0]=true;
        int points=0;
        for(int i=0;i<queries.size();i++){
            int ele=sorted_queries[i].first;
            int index=sorted_queries[i].second;
            while(!pq.empty() && pq.top()[0] < ele) {
                int i = pq.top()[1];
                int j = pq.top()[2];
                pq.pop();
                points++;

                for(auto &dir : directions) {
                    int i_ = i + dir[0];
                    int j_ = j + dir[1];
                    if(i_ >= 0 && i_ < grid.size() && j_ >= 0 && j_ < grid[0].size() && !visited[i_][j_]) {
                        pq.push({grid[i_][j_], i_, j_});
                        visited[i_][j_] = true;
                    }
                }
            }
            result[index]=points;
        }
       return result;
    }
};