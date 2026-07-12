class Solution {
public:
static constexpr int MOD = 1000000007;
    int minimumCost(vector<int>& nums, int k) {
        long long r = k;
        long long cost = 0;
        long long res = 0;

        for (int x : nums) {
            if (r < x) {
                long long need = (x - r + k - 1LL) / k;

                long long old = cost;
                cost =(cost + need) % MOD;

                long long add = ((old + 1 + cost) * need / 2) % MOD;
                res = (res + add) % MOD;

                r += need * 1LL * k;
            }

            r -= x;
        }

        return res % MOD;
    }
};