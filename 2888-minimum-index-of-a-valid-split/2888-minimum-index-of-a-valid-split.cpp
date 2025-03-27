class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int, int>mp1, mp2;
        int ans=-1;
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            mp2[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            mp1[nums[i]]++;
            mp2[nums[i]]--;
            int n1=i+1;
            int n2=n-i-1;
            if(mp1[nums[i]]*2>n1 && mp2[nums[i]]*2>n2) return i;
        }
        return ans;
    }
};