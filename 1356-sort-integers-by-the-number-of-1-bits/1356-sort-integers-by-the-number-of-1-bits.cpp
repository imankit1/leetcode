class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>ds;

        for(int i=0;i<arr.size();i++){
            int set_count=__builtin_popcount(arr[i]);
            ds.push_back({set_count, arr[i]});
        }
        sort(ds.begin(), ds.end());
        vector<int>ans;
        for(auto i: ds){
            ans.push_back(i.second);
        }
        return ans;
    }
};