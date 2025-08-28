class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();

        vector<vector<int>>ans(n, vector<int>(n, 0));

        for(int i=0;i<n;i++){
            int j=0;
            int k=i;
            vector<int>temp1;
            vector<int>temp2;
            while(j<(n-i) && k<n){
                temp1.push_back(grid[j][k]);
                temp2.push_back(grid[k][j]);
                j++;
                k++;
            }
            sort(temp1.begin(), temp1.end());
            sort(temp2.begin(), temp2.end());
            reverse(temp2.begin(), temp2.end());
            j=0;
            k=i;
            int l=0;
             while(l<temp1.size()){
                ans[j][k]=temp1[l];
                ans[k][j]=temp2[l];
                j++;
                k++;
                l++;
            }  
        }

        return ans;

    }
};