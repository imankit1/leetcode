class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ones=0, zeros=0, twos=0;
        for(auto i:nums){
            if(i==0) zeros++;
            else if(i==1) ones++;
            else twos++;
        }
        int i=0;
        while(zeros--){
            nums[i]=0;
            i++;
        }
        while(ones--){
            nums[i]=1;
            i++;
        }
        while(twos--){
            nums[i]=2;
            i++;
        }
    }
};