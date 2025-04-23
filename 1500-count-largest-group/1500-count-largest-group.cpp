class Solution {
public:
    int countLargestGroup(int n) {
        vector<int>hash(n+1,0);

        int maxiiCount=0;
        for(int i=1;i<=n;i++){
            int x=i;
            int sum=0;
            while(x!=0){
                int t=x%10;
                sum+=t;
                x/=10;
            }
            hash[sum]++;
            maxiiCount=max(maxiiCount, hash[sum]);
        }

        int cnt=0;
        for(int i=1;i<=n;i++){
            if(maxiiCount==hash[i]) cnt++;
        }
        return cnt;
    }
};