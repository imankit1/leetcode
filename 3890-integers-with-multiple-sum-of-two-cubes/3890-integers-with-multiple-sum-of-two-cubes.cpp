class Solution {
public:
    vector<int> findGoodIntegers(int n) {

        unordered_map<int, int>mp;
        for(int i=1;i<1000;i++){
            for(int j=i+1;j<1000;j++){
                long long cube=pow(i,3)+pow(j,3);
                if(cube>n) break;
                mp[cube]++;
            }
        }
        vector<int>res;
        for(auto &i:mp){
            if(i.second>1) res.push_back(i.first);
        }
        sort(res.begin(), res.end());
        return res;
    }
};