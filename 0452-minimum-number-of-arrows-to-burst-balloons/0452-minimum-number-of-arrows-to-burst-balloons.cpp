class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();

        sort(points.begin(), points.end());

        int e = points[0][1];
        int cnt = 1;
        for(int i = 1; i < n;i++){
            if(e >= points[i][0]){
                e = min(e, points[i][1]);
            }

            else {
                cnt++;
                e = points[i][1];
            }
        }
        return cnt;
        
    }
};