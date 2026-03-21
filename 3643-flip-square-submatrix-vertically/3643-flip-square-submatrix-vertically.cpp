class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

        int r=grid.size();
        int c=grid[0].size();


        for(int i=y;i<y+k;i++){
             int l=x;
             int m=x+k-1;

             while(l<=m){
                swap(grid[l][i], grid[m][i]);
                l++;
                m--;
             }
        }
        return grid;
        
    }
};