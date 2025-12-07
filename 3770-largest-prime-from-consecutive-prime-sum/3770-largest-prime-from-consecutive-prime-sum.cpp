class Solution {
public:
    vector<bool>prime(int n){

          vector<bool>prime(n+1, true);
        for(int i=2;i*i<=n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }

        vector<int>ans;
        for(int j=2;j<=n;j++){
            if(prime[j]==true) ans.push_back(j);
        }

        return prime;

    }
    int largestPrime(int n) {

        int sum=0;
        int maxii=0;
         
         vector<bool>isPrime=prime(n);

          vector<int>ans;

        for(int j=2;j<=n;j++){
            if(isPrime[j]==true) ans.push_back(j);
        }



        

        for(int i=0;i<ans.size();i++){
            if(sum+ans[i]>n) break;

            sum+=ans[i];

            if(isPrime[sum] && sum<=n) maxii=max(maxii, sum);
        }
        return maxii;

    }
};