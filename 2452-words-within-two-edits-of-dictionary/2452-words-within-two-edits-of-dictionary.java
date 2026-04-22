class Solution {
    public boolean matchStr(String s1, String s2){
        int i=0, j=0;
        int c=2;
        while(i<s1.length() && j<s2.length()){
            if(s1.charAt(i)!=s2.charAt(j)){
                c--;
            }
            if(c<0){
                 return false;
            }
            i++;
            j++;
        }
        return true;
    }
    public List<String> twoEditWords(String[] queries, String[] dictionary) {
        List<String> res= new ArrayList<>();
        int n=queries.length;
        int m=dictionary.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                boolean isTrue=matchStr(queries[i], dictionary[j]);
                if(isTrue){
                res.add(queries[i]);
                break;
                } 
            }
        } 
        return res;

    }
}