class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int n=colors.size();

        int ans=0;
        for(int i=0;i<n;i++){

             
            while(i+1<n && colors[i]==colors[i+1]){
                if(neededTime[i]<neededTime[i+1]){
                
                   ans+=neededTime[i];
                    
                }
                else{
            
                   ans+=neededTime[i+1];
                   neededTime[i+1]=neededTime[i];
                    
                }
            
                i++;
            }
            
        }

        return ans;
    }
};