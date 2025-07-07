class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        int cnt=0;
        int i=0;
        int day=events[0][0];
        priority_queue<int, vector<int>, greater<int>>pq;

        while(!pq.empty()  || i<events.size()){
            while(i<events.size() && day==events[i][0]){
                pq.push(events[i][1]);
                i++;
            }

            if(!pq.empty()){
                pq.pop();
                cnt++;
            }
            day++;
            while(!pq.empty() && pq.top()<day){
                pq.pop(); 
            }

        }
        return cnt;
    }
};