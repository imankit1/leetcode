class Solution {
public:
    string smallestPalindrome(string s) {
        int j = s.size()/2;
        bool flag = false;
        if(s.size() % 2 != 0) flag = true;

        string t = s.substr(0, j);
        sort(t.begin(), t.end());

        string res = t;
        if(flag == true) res += s[j];

        reverse(t.begin(), t.end());
        return res + t;
    }
};