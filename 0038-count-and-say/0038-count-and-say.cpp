class Solution {
public:
    string countAndSay(int n) {
         string ans="1";
           int i=1;
          while(i<n){
            int cnt=0;
            string t="";
        
            char c=ans[0];
            for(int j=0;j<ans.size();j++){
                if(c==ans[j]) cnt++;
                else{
                    t+=to_string(cnt);
                    t+=c;
                    cnt=1;
                    c=ans[j];
                }
            }
            t+=to_string(cnt);
            t+=c;
            ans=t;
            i++;
        }
        return ans;
    }
};