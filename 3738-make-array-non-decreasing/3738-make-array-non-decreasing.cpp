class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int n=nums.size();
        int maxii=nums[0];
        int cnt=1;
        for(int i=1;i<n;i++){
           if(maxii<=nums[i]){
            cnt++;
            maxii=nums[i];
           }
        }
        return cnt;
    }
};