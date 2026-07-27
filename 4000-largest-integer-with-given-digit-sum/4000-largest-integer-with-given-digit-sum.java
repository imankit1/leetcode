class Solution {
    public boolean check(int num ,int n, int s){
        int sum = 0;
        int digit = 0;
        while(num > 0){
            sum += num%10;
            num /= 10;
            digit++;
        }
        return (digit == n && sum == s) ? true : false;
    }
    public int largestInteger(int n, int s) {
        if(s == 0) return 0;
        for(int i = 100000; i >= 1; i--){
           if(check(i, n, s)) return i;
        }
        return -1;
    }
}