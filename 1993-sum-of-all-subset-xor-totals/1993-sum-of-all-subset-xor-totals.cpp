class Solution {
public:
    int help(vector<int>& nums, int i, int curr){
    //    base case
        if(i==nums.size()){
          
            return curr;
        }
        
        int take= help(nums, i+1, curr^nums[i]);
   
       int not_take= help(nums, i+1, curr);
       return take+ not_take;

    }
    int subsetXORSum(vector<int>& nums) {
       
       

        int ans= help(nums, 0, 0);
        
        return ans;
    }
};