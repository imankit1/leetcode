class Solution {
    public int closestTarget(String[] words, String target, int startIndex) {


        int n=words.length;

        int res=Integer.MAX_VALUE;
        for(int i=startIndex;i<n+startIndex;i++){
            if(words[(i+1)%n].equals(target)){
                res=Math.min(res, i-startIndex+1);
                res=Math.min(res, n-(i-startIndex+1));
            }
        }
        return res==Integer.MAX_VALUE? -1 :res;
        
    }
}