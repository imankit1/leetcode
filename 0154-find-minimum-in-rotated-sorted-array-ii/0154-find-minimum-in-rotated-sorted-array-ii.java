class Solution {
    public int findMin(int[] nums) {
        int s = 0, e = nums.length-1;
        int res=0;
        while(s <= e){
            while(s < e && nums[s] == nums[s+1]) s++;

            while(s < e && nums[e] == nums[e-1]) e--;
            int mid = s + (e-s)/2;

           if(nums[mid] < nums[res]) res=mid;

            else if(nums[mid] > nums[e]){
                  s = mid+1;
            }

            else e = mid-1;
        }

        return nums[res];
    }
}