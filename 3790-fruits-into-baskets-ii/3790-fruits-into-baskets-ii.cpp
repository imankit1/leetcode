class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        vector<bool>visited(n, false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(fruits[i]<=baskets[j] && !visited[j]){
                    visited[j]=true;
                    break;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                cnt++;
            }
        }
        return cnt;
    }
};