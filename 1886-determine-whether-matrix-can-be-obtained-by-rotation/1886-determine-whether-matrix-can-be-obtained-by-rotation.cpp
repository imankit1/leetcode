class Solution {
public:
    bool solve(vector<vector<int>>& mat, vector<vector<int>>& tar){
        bool flag=true;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(mat[i][j]!=tar[i][j]) flag=false;
            }
        }
        return flag;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();

        if(solve(mat, target))return true;
        vector<vector<int>>temp;
        for(int i=0;i<n;i++){
            vector<int>t;
            for(int j=n-1;j>=0;j--){
                    t.push_back(mat[j][i]);
            }
            temp.push_back(t);
        }
        if(solve(temp, target)) return true;

        vector<vector<int>>temp1;
        for(int i=0;i<n;i++){
            vector<int>t;
            for(int j=n-1;j>=0;j--){
                    t.push_back(temp[j][i]);
            }
            temp1.push_back(t);
        }
         if(solve(temp1, target)) return true;


         vector<vector<int>>temp2;
        for(int i=0;i<n;i++){
            vector<int>t;
            for(int j=n-1;j>=0;j--){
                    t.push_back(temp1[j][i]);
            }
            temp2.push_back(t);
        }
         if(solve(temp2, target)) return true;


        vector<vector<int>>temp3;
        for(int i=0;i<n;i++){
            vector<int>t;
            for(int j=n-1;j>=0;j--){
                    t.push_back(temp2[j][i]);
            }
            temp3.push_back(t);
        }
         if(solve(temp3, target)) return true;
        return false;
    }
};