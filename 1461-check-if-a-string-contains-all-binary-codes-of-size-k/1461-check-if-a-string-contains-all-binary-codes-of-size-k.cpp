class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k) return false;
        set<string>st;
        for(int i=0;i<=s.size()-k;i++){
            string temp="";
            for(int j=i;j<i+k;j++){
                temp+=s[j];
            }
                st.insert(temp);
        }


        int total_com=pow(2,k);
        if (st.size()==total_com) return true;
        return false; 
    }
};