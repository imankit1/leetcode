class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int n=nums.size();
    for(int i=1;i<n-1;i++){
        int val=nums[i];
        if(val==nums[i-1]) continue;
        
        int left=0, right=0;
        
        int j=i-1;
        while(j>=0){
            if(nums[j]<val) 
            {
                left=1;
                break;
            }
           else if(nums[j]>val){
           left=-1;
           break;
           }  
            j--;
        }
        int k=i+1;
        while(k<n){
            if(nums[k]<val)  {
                right=1;
                break;
            }
            if(nums[k]>val)  {
                right=-1;
                break;
            }
            k++;
        }
        if ((left==right)  && left!=0)   count++;
    }
    return count;
    }
};