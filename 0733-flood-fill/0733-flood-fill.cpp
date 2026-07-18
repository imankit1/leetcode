class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
          int n = image.size();   // row
        int m = image[0].size();  //col
        
        
        vector<vector<int>>visited(n, vector<int>(m ,0));
        
        // vector<vector<int>>temp(n, vector<int>(m ,0));
        
        // for(int i = 0; i < n; i++){
        //     for(int j = 0; j < m; j++){
        //         temp[i][j] = image[i][j];
        //     }
        // }
        
        queue<pair<int, int>>q;
        int initialColor = image[sr][sc];
        
        q.push({sr, sc});
        visited[sr][sc] = 1;
        image[sr][sc] = color;
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            
            int nrow[] = {0, -1, 0, 1};
            int ncol[] = {-1, 0, 1, 0};
            
            for(int i = 0; i < 4; i++){
                int nr = r + nrow[i];
                int nc = c + ncol[i];
            if(nr >= 0 && nr < n && nc >=0 && nc < m && !visited[nr][nc] &&
            image[nr][nc] == initialColor){
                visited[nr][nc] = 1;
                q.push({nr, nc});
                image[nr][nc] = color;
            }
            }
        }
        
        return image;
    }
};