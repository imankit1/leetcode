class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int l=0, r=0, d=0;
        for(Character s: moves.toCharArray()){
            if(s=='L') l++;
            else if(s=='R') r++;
            else d++;
        }
        return Math.abs(l-r)+d;
    }
}