class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        int jump=0;
        while(r<n-1){
            int farthat=0;
            for(int i=l;i<=r;i++){
                farthat=max(farthat, i+nums[i]);
            }

            l=r+1;
            r=farthat;
            jump++;
        }
        return jump;
    }
};