class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>>mp;
        for(int i = 0; i < nums.size(); i++) mp[nums[i]].push_back(i);

        int res = 0;
        for(auto &i : mp){
            vector<int>temp = i.second;
            bool flag = true;
            for(int j = 1; j < temp.size(); j++){
                if(temp[j] - temp[j - 1] != 1){
                    flag = false;
                    break;
                }
            }
            if(flag == true) res++;
        }

        return res;
    }
};