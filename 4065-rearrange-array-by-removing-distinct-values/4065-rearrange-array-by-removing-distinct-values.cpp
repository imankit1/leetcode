class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int remaining = 0;
        map<int, int>freq;
        for(auto &i: nums){
            freq[i]++;
            remaining++;
        }
while (remaining > 0) {
    for (int i = 0; i < freq.size(); i++) {
        if (freq[i] > 0) {
            ans.push_back(i);
            freq[i]--;
            remaining--;
        }
    }
}
        return ans;
    }
};