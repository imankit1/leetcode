class Solution {
public:
    long long solve(string& input, int limit, string& suffix) {
        if (input.length() < suffix.length())
            return 0;

        long long count = 0;
        string trailString = input.substr(input.length() - suffix.length());

        int remainL = input.length() - suffix.length();
        for (int i = 0; i < remainL; i++) {
            int digit = input[i] - '0';
            if (digit <= limit) {
                count += digit * pow(limit + 1, remainL - i - 1);
            } else {
                count += pow(limit + 1, remainL - i);
                return count;
            }
        }
        if (trailString >= suffix)
            count += 1;

        return count;
    }
    long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
        string s1 = to_string(start - 1);
        string s2 = to_string(finish);
        return solve(s2, limit, s) - solve(s1, limit, s);
    }
};