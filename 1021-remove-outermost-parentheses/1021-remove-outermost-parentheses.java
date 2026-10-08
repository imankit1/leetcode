class Solution {
    public String removeOuterParentheses(String s) {
        int cnt = 0;
        StringBuilder res = new StringBuilder();

        for(int i = 0; i <  s.length(); i++){
            if(s.charAt(i) == '('){
                if(cnt != 0){
                    res.append(s.charAt(i));
                }
                cnt++;
            }
                else{
                    if(cnt > 1){
                        res.append(s.charAt(i));
                    }
                    cnt--;
                }
        }
        return res.toString();
    }
}