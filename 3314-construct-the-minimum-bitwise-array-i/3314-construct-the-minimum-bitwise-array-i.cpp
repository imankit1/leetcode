class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;

        for(int i=0;i<nums.size();i++){

            int s=1;
            bool isFind=false;
            while(s<nums[i]){
                if((s|s+1)==nums[i]){
                ans.push_back(s);
                isFind=true;
                break;
                } 
                s++;
            }
            if(!isFind) ans.push_back(-1);

        }
        return ans;
    }
};