class Solution {

    public boolean check(String temp, String s){
            int i = 0;
            int j = 0;
            while(i < temp.length() && j < s.length()){
                if(temp.charAt(i) == s.charAt(j)){
                    i++;
                    j++;
                }
                else return false;
            }
        return i == temp.length() ? true : false;
    }
    public int countPrefixes(String[] words, String s) {
        int res = 0;
        for(int i = 0; i < words.length; i++){
            String temp = words[i];
            if(check(temp, s)) res++;
        }  
        return res;
    }
}