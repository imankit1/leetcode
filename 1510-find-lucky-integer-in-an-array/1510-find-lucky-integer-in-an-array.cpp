class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int>mpp;
        for(auto i:arr) mpp[i]++;

        int ans=-1;
        for(auto i: mpp){
            if(i.first==i.second) ans=i.first;
        }
        return ans;
    }
};