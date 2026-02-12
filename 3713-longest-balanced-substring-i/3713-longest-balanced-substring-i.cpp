class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int maxLen=0;
        for(int i=0;i<n;i++){
            vector<int>hash(26,0);
            for(int j=i;j<n;j++){
                hash[s[j]-'a']++;
                bool isNotEqual=false;
                int flag=hash[s[i]-'a'];
                for(int k=i;k<=j;k++){
                    int cnt=hash[s[k]-'a'];
                    if(cnt!=flag){
                        isNotEqual=true;
                        break;
                    }
                }
                if(isNotEqual==false) maxLen=max(maxLen, (j-i+1));
            }
        }
        return maxLen;
    }
};