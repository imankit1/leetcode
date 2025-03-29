class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(), inter.end());

        int maxii=inter[0][1];
        int cnt=0;
        for(int i=1;i<inter.size();i++){
            if(inter[i][0]<maxii){
                maxii=min(maxii, inter[i][1]);
                cnt++;
            }
            else{
                maxii=max(maxii, inter[i][1]);
            }
        }
        return cnt;
    }
};