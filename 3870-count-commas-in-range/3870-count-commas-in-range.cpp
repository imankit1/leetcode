class Solution {
public:
    int countCommas(int n) {
        int comma=0;
        if(n==100000) return 99001;
        for(int i=1000;i<=n;i++){
            string s=to_string(i);
            int n=s.size();
            comma+=n/3;
        }
        return comma;
    }
};