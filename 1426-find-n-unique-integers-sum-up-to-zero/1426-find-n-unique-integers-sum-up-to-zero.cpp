class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int idx=1;
        if(n%2==0){
        for(int i=0;i<n;i+=2){
            ans.push_back(idx);
            ans.push_back(-idx);  
           idx++;
        }
        }
        else{
            for(int i=0;i<n-1;i+=2){
                ans.push_back(idx);
                ans.push_back(-idx);
                idx++;
            }
            ans.push_back(0);
        }
        return ans;
    }
};