class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;
        for (int i = 0; i < nums.size(); i++) {
            
              while(!st.empty() && nums[i]<0 && st.top()>0){
                int sum=nums[i]+st.top();
                if(sum<0) st.pop();
                else if(sum>0){
                    nums[i]=0;
                }
                else {//sum==0
                st.pop();
                nums[i]=0;
              }
        }

            if(nums[i]!=0)
                st.push(nums[i]);
        }


        int n = st.size();
        int j = n - 1;
        vector<int> ans(n, 0);
        while (!st.empty()) {
            ans[j] = st.top();
            st.pop();
            j--;
        }
        return ans;
    }
};