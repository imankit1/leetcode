class Solution {
public:

    int  longestHelp(string& s1, string & s2, int i, int j,  vector<vector<int>>&dp){
        //base case

        if(i>=s1.size() || j>=s2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        if(s1[i]==s2[j]) return dp[i][j]= 1+longestHelp(s1, s2, i+1, j+1, dp);

        return dp[i][j]=max(longestHelp(s1, s2, i+1, j, dp), longestHelp(s1, s2, i, j+1, dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int i=0, j=0;
        int n1=text1.size(), n2=text2.size();
        vector<vector<int>>dp(n1, vector<int>(n2, -1));
       return  longestHelp(text1, text2, i, j, dp);
    }
};