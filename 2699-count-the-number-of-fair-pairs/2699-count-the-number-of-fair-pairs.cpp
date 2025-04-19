class Solution {
public:
    int findLowerBound(vector<int>& nums, int l, int r, int val) {
        int ans = r + 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= val) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }

    int findUpperBound(vector<int>& nums, int l, int r, int val) {
        int ans = l - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= val) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long count = 0;

        for (int i = 0; i < n - 1; ++i) {
            int lowVal = lower - nums[i];
            int highVal = upper - nums[i];

            int l = findLowerBound(nums, i + 1, n - 1, lowVal);
            int r = findUpperBound(nums, i + 1, n - 1, highVal);

            if (l <= r) {
                count += (r - l + 1);
            }
        }

        return count;
    }
};
