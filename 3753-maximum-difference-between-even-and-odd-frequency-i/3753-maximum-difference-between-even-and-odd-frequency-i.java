class Solution {
    public int maxDifference(String s) {
        int[] hash=new int[26];
        for(int i=0;i<s.length();i++){
            hash[s.charAt(i)-'a']++;
        }

        int maxFreqOdd=0;
        int minFreqEven=100;
        for(int i=0;i<26;i++){
            if(hash[i]>0){
                if(hash[i]%2==0){
               
                 minFreqEven=Math.min(minFreqEven, hash[i]);

                }
                else {
                    maxFreqOdd=Math.max(maxFreqOdd, hash[i]);
                
                }
            }
        }
        return (maxFreqOdd-minFreqEven);
    }
}