class Solution {
public:
    vector<int>graySolve(int n){
        int total=(1<<n);   //2^n
        vector<int>ans;
        for(int i=0;i<total;i++){
            ans.push_back(i^(i>>1));
        }
        return ans;
    }
    vector<int> grayCode(int n) {
        return graySolve(n);
    }
};