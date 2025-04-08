class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        vector<int> v(100 + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]]++;
        }

        int i=0;
        // int cnt=0;
        int n=nums.size();
        while(i<n){
            int j=i;
            while(j<n){
                if(v[nums[j]]>1){
                    cnt++;
                    for(int k=i;k<i+3;k++){
                       if(k<n) v[nums[k]]--;
                    }
                    i=i+3;
                    continue;
                }
                if(j==n) return 0;
                j++;
            }
            i++;
        }
        return cnt;
    }
};