class Solution {
public:
   double solveTime(vector<int>& piles, int t){
        double time = 0;
        for(auto i:piles){
             if(i % t == 0) time += (i/t);
             else time += (i/t) + 1;
        }
        return time;
    }
    int solve(vector<int>& piles, int s, int e, int hr){

        int l = s, h = e;
        int ans = -1;
        while(l <= h){
            long long mid = l + (h - l) / 2;
            long long timeTaken = solveTime(piles,   mid);

            if(timeTaken <= hr){
                ans = mid;
                h = mid - 1;

            } 
            else l = mid + 1;
        }

        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = INT_MAX;
        int maxii = INT_MIN;

        for(int i = 0; i < piles.size(); i++){
            mini = min(mini, piles[i]);
            maxii = max(maxii, piles[i]);
        }

        return solve(piles, 1, maxii, h);
    }
};