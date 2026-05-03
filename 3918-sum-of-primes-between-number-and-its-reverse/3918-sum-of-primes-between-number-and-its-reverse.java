class Solution {
    public int[] primeNumber(int n){
        int[] prime= new int[1001];
        for(int i=2;i*i<=1000;i++){
            if(prime[i]==0){
            for(int j=i*i;j<=1000;j+=i){
                prime[j]=1;
            }
            }
        }
        prime[1]=1;
        return prime;
    }
    public int revSolve(int n){
        int num=0;
        while(n>0){
            num=num*10+(n%10);
            n/=10;
        }
        return num;
    }
    public int sumOfPrimesInRange(int n) {
        int[] prime= primeNumber(n);
        int rev=revSolve(n);
        int res=0;
        System.out.println(rev);
        for(int i=Math.min(n, rev); i<=Math.max(n, rev); i++){
             
            if(prime[i]==0) res+=i;
        }
        return res;
    }
}