class Solution {
public:
    int solve(vector<int>& arr, int x) {
        int s = 0;
        int e = arr.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if(arr[mid]==x)return mid;

           if (arr[mid] >= arr[s]) {

                if (x >= arr[s] && x <= arr[mid]) {
                    e = mid - 1;
                } else
                    s = mid + 1;
            } else {
                if (x >= arr[mid] && x <= arr[e]) {
                    s = mid + 1;
                } else
                    e = mid - 1;
            }
        }
        return -1;
    }
 
    int search(vector<int>& nums, int target) {
        return solve(nums, target);
    }
};