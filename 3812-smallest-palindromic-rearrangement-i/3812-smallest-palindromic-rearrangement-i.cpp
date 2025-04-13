class Solution {
public:
    string arrange(string s, int idx, int mid) {
        string s1 = "";
        int i = idx;
        while (i < mid) {
            s1 += s[i];
            i++;
        }
        sort(s1.begin(), s1.end());
        return s1;
    }
    string smallestPalindrome(string s) {
        int n = s.size();
        int mid = n / 2;

        string ans = arrange(s, 0, mid);

        if(n%2!=0) {
         string newAns = arrange(s, mid+1, n);
          reverse(newAns.begin(), newAns.end());
         return ans +s[mid] +newAns;

        } 
        string newAns=arrange(s, mid, n);
        reverse(newAns.begin(), newAns.end());
        return ans+newAns;


    }
};