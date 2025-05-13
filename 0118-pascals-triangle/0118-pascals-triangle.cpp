class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>dp;
        dp.push_back(0);
        dp.push_back(1);
        for(int i=0;i<numRows;i++){
            vector<int>temp;
            for(int j=1;j<dp.size();j++){
                temp.push_back(dp[j-1]+dp[j]);
            }
            ans.push_back(temp);
            dp.clear();
            dp.push_back(0);
            for(int k=0;k<temp.size();k++){
                dp.push_back(temp[k]);
            }
            dp.push_back(0);
        }
        return ans;
    }
};