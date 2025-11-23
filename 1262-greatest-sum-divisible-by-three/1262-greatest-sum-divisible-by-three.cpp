class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {

        long long sum=accumulate(nums.begin(), nums.end(), 0);

        vector<int>rem1, rem2;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==1) rem1.push_back(nums[i]);
            else if(nums[i]%3==2)rem2.push_back(nums[i]);
        }

        if(sum%3==0) return sum;

        int rem=sum%3;
        //1, //2

        sort(rem1.begin(), rem1.end());
        sort(rem2.begin(), rem2.end());

        if(rem==1){
            int one=rem1.size()>0 ?rem1[0]: INT_MAX;
            int two=rem2.size()>1 ?(rem2[0]+rem2[1]): INT_MAX;

            return (sum-min(one, two));
        }

        else{
            int one=rem2.size()>0 ?rem2[0]: INT_MAX;
            int two=rem1.size()>1 ?(rem1[0]+rem1[1]): INT_MAX;

            return (sum-min(one, two));
        }

       return 0;  
    }
};