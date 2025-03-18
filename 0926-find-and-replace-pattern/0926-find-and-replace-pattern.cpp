class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

        vector<string>final;
        vector<pair<char, int>>arr;
        unordered_map<char, int>mp;
        for(auto i:pattern){
            mp[i]++;
        }
        for(int i=0;i<pattern.size();i++){
            arr.push_back(make_pair(pattern[i], mp[pattern[i]]));
        }
        // mp.clear();
        for(int i=0;i<words.size();i++){
            string temp=words[i];
             vector<pair<char, int>>cnt;
        unordered_map<char, int>mpp;
        for(auto l:temp){
            mpp[l]++;
        }
        if(mpp.size()!=mp.size()) continue;
        for(int j=0;j<temp.size();j++){
            cnt.push_back(make_pair(temp[j], mpp[temp[j]]));
        }

        bool check=false;
        for(int k=0;k<cnt.size();k++){
            if(cnt[k].second!=arr[k].second) check=true;        
        }
        for(int k=1;k<cnt.size();k++){
            if((cnt[k-1].first==cnt[k].first) && (arr[k-1]!=arr[k])) check=true;
            
        }
        if(check==false) final.push_back(temp);
        }
        return final;
    }
};