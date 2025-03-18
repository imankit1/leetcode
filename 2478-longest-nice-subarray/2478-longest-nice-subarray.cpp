class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int maxii=1;
    
        for(int i=0;i<nums.size();i++){
            int mask=0;
            for(int j=i;j<nums.size();j++){
                if((mask & nums[j])!=0){
                    break;
                }
                maxii=max(maxii, j-i+1);
                mask=(mask|nums[j]);
            }
        }
        return maxii;
    }
};

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0, r=0;
        int x=0;
        int maxii=1;
        int mask=0;
        while(r<nums.size()){
            while((mask&nums[r])!=0){
                mask=(mask^nums[l]);
                l++;
            }
            maxii=max(maxii, r-l+1);
            mask=(mask|nums[r]);
            r++;
        }
        return maxii;
    }
};
