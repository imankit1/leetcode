class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxii=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++){
            if(mini<prices[i]){
                maxii=max(maxii, prices[i]-mini);
            }
            mini=min(mini, prices[i]);
        }
    return maxii;
    }
};