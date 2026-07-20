class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

       vector<vector<int>> res(n, vector<int>(m, 0));
       vector<int>temp;

       for(auto &i : grid){
        for(auto &j: i){
            temp.push_back(j);
        }
       }
    k = k % (n*m);
    int l = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cnt++;
            if(cnt > k){
                res[i][j] = temp[l++];
            }
        }
    }
     cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        if(cnt < k)
          res[i][j] = temp[l++];
          cnt++;
        }
    }
    return res;

    }
};