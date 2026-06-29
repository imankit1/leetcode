class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_map<string, int>mp;
        for(int i = 0; i < word.size(); i++){
            string temp = "";
            for(int j = i; j < word.size(); j++){
                temp.push_back(word[j]);
                mp[temp] = 1;
            }
        }
        int cnt = 0;
        for(auto &j:patterns){
            if(mp.find(j) != mp.end()) cnt++;
        }

        return cnt;
    }
};