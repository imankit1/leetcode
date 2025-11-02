class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));

        // for guard = 1;
        for (int i = 0; i < guards.size(); i++) {
            int r = guards[i][0];
            int c = guards[i][1];
            grid[r][c] = 1;
        }

        // for wall = 2;
        for (int i = 0; i < walls.size(); i++) {
            int r = walls[i][0];
            int c = walls[i][1];
            grid[r][c] = 2;
        }

        // Mark guarded cells
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {   // ✅ only spread from guards
                    // left
                    for (int k = j - 1; k >= 0; k--) {
                        if (grid[i][k] == 2 || grid[i][k] == 1) break;
                        grid[i][k] = -1;
                    }
                    // right
                    for (int k = j + 1; k < n; k++) {
                        if (grid[i][k] == 2 || grid[i][k] == 1) break;
                        grid[i][k] = -1;
                    }
                    // up
                    for (int k = i - 1; k >= 0; k--) {
                        if (grid[k][j] == 2 || grid[k][j] == 1) break;
                        grid[k][j] = -1;
                    }
                    // down
                    for (int k = i + 1; k < m; k++) {
                        if (grid[k][j] == 2 || grid[k][j] == 1) break;
                        grid[k][j] = -1;
                    }
                }
            }
        }

        // count unguarded cells
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) count++;
            }
        }

        return count;
    }
};
