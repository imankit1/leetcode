class Solution {
    public int countValidPrefixes(String s) {
        int zeros = 0, ones = 0;
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '0') zeros ++;
            else ones++;

            // if(zeros == 1 || ones == 1) res++;
            if(Math.abs(ones - zeros) == 1) res++;
            else if(zeros == ones) res++;
        }

        return res;
    }
}