class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<vector<char>>ch;
        int n=strs.size();

        int c=INT_MAX;
        for(int i=0;i<n;i++){
            string s=strs[i];
            vector<char>temp;
            for(int j=0;j<s.size();j++){
             temp.push_back(s[j]);
            }

            c=min(c, (int)temp.size());
            ch.push_back(temp);
        }


        int count=0;
       
        for (int i = 0; i < c; i++) {
             char d=ch[0][i];
            for (int j = 0; j < n; j++) {
                if (d - 'a' <= ch[j][i] - 'a')  {

                    d=ch[j][i];
                }
                else {
                    count++;
                    break;
                }
                    
            }
            
        }
   
        return count;
    }
};