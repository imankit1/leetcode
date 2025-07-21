class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(!ans.empty() &&  ans.back()!=s[i]){
                cnt=0;
            }
            else if(!ans.empty() && ans.back()==s[i]) cnt++;

            if(cnt<2) ans+=s[i];
        }
        return ans;
    }
};