class Solution {
public:

    int find(vector<pair<int, int>>&ds, int& target){
        int lower=0;
        int upper=ds.size()-1;
        int ans=-1;
        while(lower<=upper){
            int mid=lower+(upper-lower)/2;

            if(ds[mid].first<=target){
                ans=mid;
                lower=mid+1;
            }
            else{
                upper=mid-1;
            }
        }
        if(ans==-1) return 0;
        return ds[ans].second;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>>ds;

        int n=profit.size();

        for(int i=0;i<n;i++){
            ds.push_back(make_pair( difficulty[i], profit[i]));
        }

        sort(ds.begin(), ds.end());

        int maxii=0;
        for(int i=0;i<n;i++){
           maxii=max(maxii, ds[i].second);
           ds[i].second=maxii;
        }
          int maxProfit=0;
        for(int i=0;i<worker.size();i++){
               int target=worker[i];
               int ans=find(ds, target);
             maxProfit+=ans;
        }
        return maxProfit;
    }
};