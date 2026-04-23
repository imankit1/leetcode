class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();


        // Left 
        unordered_map<long long, long long>idxSumLeft;
        unordered_map<long long,long long>idxCountLeft;
        vector<long long>prefix;
        for(int i=0;i<n;i++){
            long long f=idxCountLeft[nums[i]];
            long long s=idxSumLeft[nums[i]];
            long long res= (f*i)-s;
            prefix.push_back(res);
            idxCountLeft[nums[i]]++;
            idxSumLeft[nums[i]]+=i;
        }

        // Right

        unordered_map<long long, long long>idxSumRight;
        unordered_map<long long, long long>idxCountRight;
        vector<long long>suffix(n);
        for(int i=n-1;i>=0;i--){
            long long f=idxCountRight[nums[i]];
            long long s=idxSumRight[nums[i]];
            long long res= s-(f*i);
            suffix[i]=res;
            idxCountRight[nums[i]]++;
            idxSumRight[nums[i]]+=i;
        }

        vector<long long>ans;
        for(int i=0;i<prefix.size();i++){
            ans.push_back(prefix[i]+suffix[i]);
        }
        return ans;
        
    }
};