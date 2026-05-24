class Solution {
public:
    int passwordStrength(string p) {
        
        unordered_map<char, int>mp;
        int res = 0;

        for(int i = 0;i< p.size(); i++){
            if(mp[p[i]] == 1) continue;
            
            if(p[i] >= 'a' && p[i] <= 'z' && mp[p[i]] == 0){
                res += 1;
                mp[p[i]] = 1;
            }
              else if(p[i] >= 'A' && p[i] <= 'Z' && mp[p[i]] == 0){
                res += 2;
                mp[p[i]] = 1;
            }
             else if(p[i] >= '0' && p[i] <= '9' && mp[p[i]] == 0){
                res += 3;
                mp[p[i]] = 1;
            }

            else if(mp[p[i]] == 0){
                res += 5;
                mp[p[i]] = 1;
            }
            
        }
        return res;
    }
};