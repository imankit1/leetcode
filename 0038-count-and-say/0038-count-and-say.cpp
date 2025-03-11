class Solution {
public:
    string countAndSay(int n) {
        int j=1;
        string s="1";
        unordered_map<char, int>mp;
        while(j!=n){
            string ans="";
            for(int i=0;i<s.size();i++){
                mp[s[i]]++;
                if(mp.size()==2){
                    ans+=to_string(mp[s[i-1]]);
                    ans+=s[i-1];
                    mp.erase(s[i-1]);
                }
            }
            for(auto i:mp){
                ans+=to_string(i.second);
                ans+=i.first;
            }
            s=ans;
            mp.clear();
           j++;
        }
        return s;
    }
};