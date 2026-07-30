class Solution {
    public void dfs(int i, int j, int[][] grid, int [][]visited){
        visited[i][j] = 1;
        int m = grid.length;
        int n = grid[0].length;

        int[] drow = {0, -1, 0, 1};
        int[] dcol = {-1, 0, 1, 0};

        for(int k = 0; k < 4; k++){
            int nrow = drow[k] + i;
            int ncol = dcol[k] + j;

            if(nrow >=0 && nrow < m && ncol >= 0 && ncol < n && visited[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                dfs(nrow, ncol, grid, visited);
            }
        }

    }
    public int numEnclaves(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;

        int [][]visited = new int[m][n];
         for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((i == 0 || j == 0 || i == m-1 || j == n-1) && visited[i][j] == 0 && grid[i][j]== 1){
                    dfs(i ,j, grid, visited);
                }
            }
        }

        int landCell = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(visited[i][j] == 0 && grid[i][j] == 1) landCell++;
            }
        }
        return landCell;
       
    }
}