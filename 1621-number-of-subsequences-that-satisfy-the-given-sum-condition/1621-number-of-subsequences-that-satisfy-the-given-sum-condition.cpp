class Solution {
public:
        int M=1e9+7;
    int numSubseq(vector<int>& nums, int target) {

        int n=nums.size();
        vector<int>power(n);
        power[0]=1;
        for(int i=1;i<n;i++){
            power[i]=(power[i-1]*2)%M;
        }

        sort(nums.begin(), nums.end());
        int cnt=0;
        int i=0, j=nums.size()-1;
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                int diff=j-i;
                cnt=(cnt %M +power[diff]) % M;
                i++;
            }
            else j--;
        }
        return cnt;
    }
};