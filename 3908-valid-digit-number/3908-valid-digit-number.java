class Solution {
    public boolean validDigit(int n, int x) {
        boolean isContainX=false;
        boolean isStart=false;

        while(n>9){
            int r=n%10;
            if(r==x) isContainX=true;
            n/=10;
        }
        if(n==x) isStart=true;

        if(isContainX && !isStart) return true;
        return false;
    }
}