class Solution {
public:
    int differenceOfSums(int n, int m) {
        
        long long d=0;
        long long notd=0;
        for(int i=1;i<=n;i++){
            if(i%m==0) d+=i;
            else notd+=i;
        }
        return notd-d;
    }
};