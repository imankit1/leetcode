class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int min_r=INT_MAX, max_r=INT_MIN;
        int min_c=INT_MAX, max_c=INT_MIN;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){

                if(grid[i][j]==1){
                min_r=min(min_r,  i);
                max_r=max(max_r,  i);
                min_c=min(min_c,  j);
                max_c=max(max_c,  j);

                }
            }
        }

        int area=(max_r-min_r+1)*(max_c-min_c+1);
        return area;
    }
};