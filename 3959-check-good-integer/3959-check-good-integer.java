class Solution {
    public boolean solve(int n){
        int sum = 0;
        int square = 0;
        while(n > 0){
            int t = n%10;
            sum += t;
            square += (t*t);
            n /= 10;
        }
        return square - sum >= 50 ? true : false;
    }
    public boolean checkGoodInteger(int n) {
        return solve(n);
        
    }
}