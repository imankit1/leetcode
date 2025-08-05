class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        vector<bool>visited(n, false);
        int cnt=0;
        for(int i=0;i<n;i++){
            bool flag=false;
             
            for(int j=0;j<n;j++){
                if(fruits[i]<=baskets[j] && !visited[j]){
                    visited[j]=true;
                    flag=true;
                     
                    break;
                }
            }
            if(flag==false) cnt++;
        }
         
        return cnt;
    }
};