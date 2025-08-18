class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>temp;
        string flag="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                temp.push_back(flag);
                flag="";
            }
            else{
                flag+=s[i];
            }
        }
        temp.push_back(flag);

        if(temp.size()!=pattern.size()) return false;


        unordered_map<char, string>mpp;
        unordered_map<string, int>mp;

        for(int i=0;i<pattern.size();i++){
            if(mpp.find(pattern[i])!=mpp.end()){
                if(mpp[pattern[i]]!=temp[i]) return false;
            }
         if(mpp.find(pattern[i])==mpp.end()){
                if(mp.find(temp[i])!=mp.end()) return false;
         }
           mpp[pattern[i]]=temp[i];
           mp[temp[i]]++;
        }
        return true;
    }
};