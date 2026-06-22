class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int>mp;
        int mini = INT_MAX;
        for(auto &i: text){
          if(i == 'b' || i == 'a' || i == 'l' || i == 'o' || i == 'n')  mp[i]++;
        }

        if(mp.size() == 5){

            for(auto &i: mp){
                int x = i.second;
                if(i.first =='l' || i.first =='o') x = x/2;
                mini = min(mini, x);
            }
        }
        return mini == INT_MAX ? 0 : mini;
    }
};