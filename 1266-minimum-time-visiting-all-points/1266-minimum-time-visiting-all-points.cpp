class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {

        int cntAns = 0;
        for (int i = 0; i < points.size() - 1; i++) {
            int x = points[i][0];
            int y = points[i][1];

            int x1 = points[i + 1][0];
            int y1 = points[i + 1][1];

 
                while (x !=x1 && y != y1) {
                     
                        if(x<x1) x++;
                        else x--;

                        if(y<y1) y++;
                        else y--;

                        cntAns++;
                }
                int dis = abs(y - y1) + abs(x - x1);
                cntAns += dis;
            }
        
        return cntAns;
    }
};