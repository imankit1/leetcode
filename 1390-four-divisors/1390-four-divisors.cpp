class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        long long sumAns=0;
        for(int i=0;i<nums.size();i++){
            int cntDivisors=0;
            long long sum=0;
            for(int j=1;j*j<=nums[i];j++){
                    
                if(nums[i]%j==0){
                  int  div=nums[i]/j;
                
                if(div==j){
                    cntDivisors+=1;
                    sum+=div;
                }
                else{
                    cntDivisors+=2;
                    sum+=(div+j);
                }
                }

                if(cntDivisors>4) break;

            }
            if(cntDivisors==4) {
                sumAns+=sum;
            }
        }
        return sumAns;
    }
};