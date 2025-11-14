class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>ds(n, vector<int>(n, 0));

        int s=queries.size();
        for(int i=0;i<s;i++){
            for(int j=queries[i][0];j<=queries[i][2];j++){
                for(int k=queries[i][1];k<=queries[i][3];k++){
                    ds[j][k]++;
                }
            }
        }
        return ds;
    }
};