class Solution {
    public boolean canPlaceFlowers(int[] f, int n) {
        int cnt = 0;

        if(f.length == 1 && f[0] == 0) return true;
        // if(f.length == 1 && f[0] == 1) return true;
        for(int i = 1; i < f.length;i++){
            if(i == 1 && f[i] == 0 && f[i-1] == 0) cnt++;
            else if(i < f.length-1 && f[i-1] == 0 && f[i] == 0 && f[i+1] == 0){
            cnt++;
            f[i] = 1;
            } 
            else if(i == f.length-1 && f[i-1] == 0 && f[i] == 0)cnt++;
        }
        return cnt >= n ? true : false;
    }
}