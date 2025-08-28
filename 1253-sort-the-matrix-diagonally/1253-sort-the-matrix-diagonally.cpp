class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();

     
        for(int i = 0; i < r; i++){
            int j = i, k = 0;
            vector<int> temp;
            while(j < r && k < c){
                temp.push_back(mat[j][k]);
                j++;
                k++;
            }
            sort(temp.begin(), temp.end());
            j = i; k = 0;
            int u = 0;
            while(j < r && k < c){
                mat[j][k] = temp[u++];
                j++;
                k++;
            }
        }

   
        for(int i = 1; i < c; i++){
            int j = 0, k = i;
            vector<int> temp;
            while(j < r && k < c){
                temp.push_back(mat[j][k]);
                j++;
                k++;
            }
            sort(temp.begin(), temp.end());
            j = 0; k = i;
            int u = 0;
            while(j < r && k < c){
                mat[j][k] = temp[u++];
                j++;
                k++;
            }
        }

        return mat;
    }
};
