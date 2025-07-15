class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;

        int l=0, r=0;

        int ans=0;
        while(r<s.size()){


            while(mp.find(s[r])!=mp.end() && l<r){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }

            mp[s[r]]++;
            ans=max(ans, r-l+1);
            r++;

        }

        return ans;
    }
};