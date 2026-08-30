class Solution {
    typedef long long ll;
    ll mod = 1000000007;
public:

ll power(ll f, ll s) {
    ll res = 1;

    while(s > 0) {
        if(s & 1) {
            res = (res * f) % mod;
        }

        f = (f * f) % mod;
        s >>= 1;
    }

    return res;
}
    int sumDecoded(vector<long long>& nums) {

        ll res = 0;
        for(int i = 0; i < nums.size(); i++){
            ll num = nums[i];
            ll width = num % 10;
            ll d = nums[i] / 10;

            string str = to_string(d);
            string first = str.substr(0, width);
            string second = str.substr(width);

            ll f = stoll(first);
            ll s = stoll(second);

            ll p = power(f, s);

            res = (res + (p % mod)) % mod;
        }

        return res;
    }
};