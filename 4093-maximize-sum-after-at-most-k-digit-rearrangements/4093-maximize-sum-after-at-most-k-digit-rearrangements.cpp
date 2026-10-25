class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        long long res = 0;

        vector<pair<int, int>>gain;
        for(int j = 0; j < n; j++){
            string a = to_string(nums[j]);
            sort(a.begin(), a.end());
            reverse(a.begin(), a.end());
            int m = stoi(a);

            int g =  m - nums[j];
            gain.push_back({g, j});
        }

        sort(gain.rbegin(), gain.rend());
        // for(int i = 0; i < n; i++){
        //     cout<<gain[i].first<<" "<<gain[i].second<<endl;
        // }
        for(int i  = 0; i < n; i++){
            int idx = gain[i].second;
            if(gain[i].first != 0 && k > 0){
            string a = to_string(nums[idx]);
            sort(a.begin(), a.end());
            reverse(a.begin(), a.end());
            int m = stoi(a);
            k--;
            res += m;
            }
            else res += nums[idx];
        }

        return res;
    }
};