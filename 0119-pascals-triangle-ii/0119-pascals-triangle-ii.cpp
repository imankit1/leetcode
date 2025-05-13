class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>dp;
        dp.push_back(0);
        dp.push_back(1);
        for(int i=0;i<=rowIndex;i++){
            vector<int>temp;
            for(int j=1;j<dp.size();j++){
                temp.push_back(dp[j-1]+dp[j]);
            }
            
            dp.clear();
            dp.push_back(0);
            for(int k=0;k<temp.size();k++){
                dp.push_back(temp[k]);
            }
            dp.push_back(0);
        }
        vector<int>ans;
        for(int i=1;i<dp.size()-1;i++){
            ans.push_back(dp[i]);
        }
        return ans;
    }
};