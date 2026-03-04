class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int result=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    int cnt_ones_row=0;
                    for(int k=0;k<row;k++){
                        if(mat[k][j]==1) cnt_ones_row++;
                    }
                    int cnt_ones_col=0;
                    for(int k=0;k<col;k++){
                        if(mat[i][k]==1) cnt_ones_col++;
                    }

                    if(cnt_ones_row==1 and cnt_ones_col==1) result++;
                }
            }
        }
        return result;
    }
};