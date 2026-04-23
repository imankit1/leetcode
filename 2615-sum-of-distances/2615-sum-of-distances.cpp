class Solution {
public:
    typedef long long ll;
    vector<long long> distance(vector<int>& nums) {
        int n=nums.size();


        // Left to Right
        unordered_map<ll, ll>idxSum;
        unordered_map<ll, ll>idxCount;
        vector<long long>prefix;
        for(int i=0;i<n;i++){
            long long f=idxCount[nums[i]];
            long long s=idxSum[nums[i]];
            long long res= (f*i)-s;
            prefix.push_back(res);
            idxCount[nums[i]]++;
            idxSum[nums[i]]+=i;
        }
        idxCount.clear();
        idxSum.clear();
        // Right to Left
 
        vector<long long>suffix(n);
        for(int i=n-1;i>=0;i--){
            long long f=idxCount[nums[i]];
            long long s=idxSum[nums[i]];
            long long res= s-(f*i);
            suffix[i]=res;
            idxCount[nums[i]]++;
            idxSum[nums[i]]+=i;
        }

        vector<long long>ans;
        for(int i=0;i<prefix.size();i++){
            ans.push_back(prefix[i]+suffix[i]);
        }
        return ans;
        
    }
};