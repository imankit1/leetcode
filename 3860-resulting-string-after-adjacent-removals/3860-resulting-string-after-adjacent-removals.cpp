class Solution {
public:
    string resultingString(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                if(abs(st.top()-s[i])==1 ||
                 abs(st.top()-s[i])==25) st.pop();
                 else st.push(s[i]); 
            }

            else st.push(s[i]); 
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};