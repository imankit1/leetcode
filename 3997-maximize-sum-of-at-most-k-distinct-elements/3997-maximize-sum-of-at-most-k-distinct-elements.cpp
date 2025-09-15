class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        priority_queue<int>pq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        while(!pq.empty() && ans.size()<k){
          if(ans.size()==0) ans.push_back(pq.top());
          if(ans.size()>0 && ans.back()!=pq.top())  ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};