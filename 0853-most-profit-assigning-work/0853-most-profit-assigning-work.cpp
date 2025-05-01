class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>>ds;

        int n=profit.size();

        for(int i=0;i<n;i++){
            ds.push_back(make_pair(profit[i], difficulty[i]));
        }

        sort(ds.begin(), ds.end());

        long long maxProfit=0;
        for(int i=0;i<worker.size();i++){
            for(int j=ds.size()-1;j>=0;j--){
                if(worker[i]>=ds[j].second){
                    maxProfit+=ds[j].first;
                    break;
                }
            }
        }
        return maxProfit;
    }
};