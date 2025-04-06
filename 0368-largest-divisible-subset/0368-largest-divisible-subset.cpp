// Recursive Solution T.C=O(2^n)

class Solution {
public:
    void help(vector<int>& nums, vector<int>&ans, vector<int>& temp, 
    int prev, int i){
        //base case
        if(i>=nums.size()){
            if(temp.size()>ans.size()){
                ans=temp;
            }
            return;
        }


        if(prev==-1 || nums[i]%prev==0){
            temp.push_back(nums[i]);
            help(nums, ans, temp, nums[i], i+1);
            temp.pop_back();
        }
        help(nums, ans, temp, prev, i+1);
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         
        vector<int>ans;
        vector<int>temp;
        help(nums, ans, temp, -1, 0);
        return ans;
    }
};


// bottom -up approach-->T.C=O(N*N)
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<int>dp(n, 1);
        vector<int>pre_idx(n, -1);
        int maxii=1;
        int index=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        pre_idx[i]=j;

                    }
                    if(maxii<dp[i]){
                        maxii=dp[i];
                        index=i;
                    }
                }
            }
        }

        vector<int>ans;
        while(index!=-1){
            ans.push_back(nums[index]);
                   
            index= pre_idx[index];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
