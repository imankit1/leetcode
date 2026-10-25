class Solution {

    public boolean dfs(int[][] grid, int r, int c, int m, int n){
        //out of bound
        if(r >= m || c >= n || r < 0 || c < 0){
            return false;
        }

         if(grid[r][c] == 1) return true;

         grid[r][c] = 1;

         boolean left_close = dfs(grid, r, c - 1, m, n);
         boolean right_close = dfs(grid, r, c + 1, m, n);
         boolean top_close = dfs(grid, r - 1, c, m, n);
         boolean bottom_close = dfs(grid, r + 1, c, m, n);

         return left_close && right_close && top_close && bottom_close;
    }
    public int closedIsland(int[][] grid) {
        int m = grid.length;  //row
        int n = grid[0].length; //col
        
        int cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0){
                    if(dfs(grid, i, j, m, n) == true) cnt++;
                }
            }
        }

        return cnt;
    }
}