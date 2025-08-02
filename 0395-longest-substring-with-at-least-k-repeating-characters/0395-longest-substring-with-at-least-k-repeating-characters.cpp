class Solution {
public:
    int longestSubstring(string s, int k) {

        int ans=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char, int>mpp;
            for(int j=i;j<s.size();j++){
                mpp[s[j]]++;
                bool flag=true;
                for(auto l:mpp){
                    if(l.second<k){
                        flag=false;
                        break;
                    }
                }

                if(flag==true) ans=max(ans, j-i+1);
            }
        }
        return ans;
    }
};