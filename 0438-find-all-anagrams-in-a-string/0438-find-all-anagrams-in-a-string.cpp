class Solution {
public:

    vector<int>hashHelp(string p){
              vector<int>v(26, 0);
         for(int i=0;i<p.size();i++){
            v[p[i]-'a']++;
        }
        return v;
    }
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        vector<int>ans;
        for(int i=0;i<=(s.size()-p.size());i++){
            vector<int>hash=hashHelp(p);
            int idx=-1;

            for(int j=i;j<(i+p.size());j++){
                if(hash[s[j]-'a']==0) {
                    idx=-1;
                    break;
                }
                else{
                    idx=i;
                    hash[s[j]-'a']--;
                }
            }
            if(idx!=-1) ans.push_back(idx);
        }
        return ans;
    }
};