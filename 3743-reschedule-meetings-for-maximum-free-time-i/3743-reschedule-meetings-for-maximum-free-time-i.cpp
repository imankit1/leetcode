class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int>freeTime;
        
        int n=startTime.size();
         freeTime.push_back(startTime[0]);
        for(int i=1;i<n;i++){
             freeTime.push_back(startTime[i]-endTime[i-1]);
        }
        freeTime.push_back(eventTime-endTime[n-1]);

        
       int l=0, r=0;

       int ans=0;
       int freeSum=0;
       while(r<freeTime.size()){
        freeSum+=freeTime[r];
        if( l<freeTime.size()  && r-l+1>k+1){
            freeSum-=freeTime[l];
            l++;
        }
        
            ans=max(ans, freeSum);

        r++;
       }

       return ans;
    }
};