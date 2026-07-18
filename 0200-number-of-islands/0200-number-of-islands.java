import java.util.*;

class Solution {

    public void bfs(int row, int col, boolean[][] visited, char[][] grid) {

        int n = grid.length;
        int m = grid[0].length;

        Queue<int[]> q = new LinkedList<>();
        q.offer(new int[]{row, col});
        visited[row][col] = true;

        while (!q.isEmpty()) {

            int[] curr = q.poll();
            int r = curr[0];
            int c = curr[1];

            for (int delRow = -1; delRow <= 1; delRow++) {
                for (int delCol = -1; delCol <= 1; delCol++) {

                    // Only 4 directions
                    if (Math.abs(delRow) + Math.abs(delCol) != 1) {
                        continue;
                    }

                    int nRow = r + delRow;
                    int nCol = c + delCol;

                    if (nRow >= 0 && nRow < n &&
                        nCol >= 0 && nCol < m &&
                        !visited[nRow][nCol] &&
                        grid[nRow][nCol] == '1') {

                        visited[nRow][nCol] = true;
                        q.offer(new int[]{nRow, nCol});
                    }
                }
            }
        }
    }

    public int numIslands(char[][] grid) {

        int n = grid.length;
        int m = grid[0].length;

        boolean[][] visited = new boolean[n][m];
        int noIsland = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (!visited[i][j] && grid[i][j] == '1') {
                    noIsland++;
                    bfs(i, j, visited, grid);
                }
            }
        }

        return noIsland;
    }
}