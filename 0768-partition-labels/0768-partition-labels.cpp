class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char, int> mp;
 
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] = i;
        }

         
        int maxLast = 0, start = 0;
        for (int i = 0; i < s.size(); i++) {
            maxLast = max(maxLast, mp[s[i]]); 

           
            if (i == maxLast) {
                ans.push_back(i - start + 1);
                start = i + 1;  
            }
        }
        return ans;
    }
};
