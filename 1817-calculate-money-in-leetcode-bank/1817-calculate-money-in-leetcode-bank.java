class Solution {
    public int totalMoney(int n) {
        int j=1;
        int k=1;
        int cnt=0;
        for(int i=1;i<=n;i++){
            cnt+=k;
             
            k++;
            if(i%7==0){
                j++;
                k=j;
            }
        }

        return cnt;
    }
}