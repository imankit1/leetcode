class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();

        vector<char>ans(n);
        for(int i=0;i<n;i++){
            ans[indices[i]]=s[i];
        }

        string temp="";
        for(int i=0;i<n;i++){
            temp.push_back(ans[i]);
        }
        return temp;
    }
};