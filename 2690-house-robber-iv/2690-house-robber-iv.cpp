class Solution {
public:

    bool ispossible(vector<int>& ans, int mid, int k){
        int house=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]<=mid){
                house++;
                i++;
            }
        }
        if(house>=k) return true;
        return false;
    }
    int minCapability(vector<int>& nums, int k) {

        int s=*min_element(nums.begin(), nums.end());
        int e=*max_element(nums.begin(), nums.end());
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;

            if(ispossible(nums, mid, k)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};