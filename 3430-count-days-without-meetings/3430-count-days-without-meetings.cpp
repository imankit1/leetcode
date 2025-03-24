class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });
        
        int cnt_days=0;
        int maxii=1;
        if(maxii<meetings[0][0]) cnt_days+=(meetings[0][0]-maxii);
        maxii=max(maxii, meetings[0][1]);

        for(int i=1;i<meetings.size();i++){
            if(maxii<meetings[i][0]){
                cnt_days+=(meetings[i][0]-maxii-1);
            }
            maxii=max(maxii, meetings[i][1]);
        }
        if(maxii<days) cnt_days+=(days-maxii);
        return cnt_days;
    }
};