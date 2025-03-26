class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>temp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                temp.push_back(grid[i][j]);
            }
        }

        sort(temp.begin(), temp.end());
        int n=temp.size();
        int target=temp[n/2];
        int result=0;
        for(int i=0;i<n;i++){
            if(temp[i]%x!=target%x) return -1;
            result+=abs(target-temp[i])/x;

        }
        return result;
    }
};