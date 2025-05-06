class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        int m=pushed.length;
        int n=popped.length;
        Stack<Integer> st=new Stack<>();
        int j=0;
        for(int i=0;i<m;i++){
            st.push(pushed[i]);
            while(!st.isEmpty() && st.peek()==popped[j]){
                st.pop();
                j++;
            }
        }
        if(!st.isEmpty()) return false;
        return true;
    }
}