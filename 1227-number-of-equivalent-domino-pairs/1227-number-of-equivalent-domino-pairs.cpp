class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int row=dominoes.size();
        int maxii=0;
        vector<int>visited(row, 0);
        for(int i=0;i<row-1;i++){
            int a=dominoes[i][0];
            int b=dominoes[i][1];

            int cnt=1;
            if(visited[i]==0){
            for(int j=i+1;j<row;j++){
                int c=dominoes[j][0];
                int d=dominoes[j][1];
                if(visited[j]==0){
                if((a==c && b==d) || (a==d && b==c)){
                    cnt++;
                    visited[j]=1;
                }
                }
            }
            int pairs=cnt*(cnt-1)/2;
            maxii+=pairs;
            }
           
        }
        return maxii;
    }
};