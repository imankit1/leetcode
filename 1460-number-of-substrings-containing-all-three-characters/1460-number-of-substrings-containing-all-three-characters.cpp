class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int l=0, r=0, cnt=0, n=s.size();
        while(r<n){
            mp[s[r]]++;
            while (mp.size() == 3) {  
            cnt += (n - r);   
            mp[s[l]]--;      
            if (mp[s[l]] == 0) mp.erase(s[l]);   
            l++; 
        }

            r++;
        }
        return cnt;
    }
};