class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
           vector<int>targetArr;
           for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid[0].size();j++){
                targetArr.push_back(grid[i][j]);
            }
           }
        sort(targetArr.begin(), targetArr.end());

        int idx=(grid.size()*grid[0].size())/2;
      
        int target= targetArr[idx];
       
        int ans=0;
        for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid[0].size(); j++){
                if(abs(grid[i][j]-target)%x != 0) return -1;
                int op= abs(grid[i][j]-target)/x;
                ans+=op;
            }
        }
        return ans;

    }
};