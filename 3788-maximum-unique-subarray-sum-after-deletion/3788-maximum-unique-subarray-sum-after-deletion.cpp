class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int, int>mp;
        int temp=INT_MIN;
        for(auto i: nums){
            if(i>0) mp[i]++;
            temp=max(temp, i);
        }
        int sum=0;
        
        for(auto i: mp){
            sum+=(i.first);
        }
       return sum==0 ? temp : sum;
    }
};