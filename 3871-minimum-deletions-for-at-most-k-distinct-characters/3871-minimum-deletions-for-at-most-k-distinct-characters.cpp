class Solution {
public:
    int minDeletion(string s, int k) {
          vector<int>freq(26, 0);

       for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
       }
        sort(freq.begin(), freq.end());
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]>0) cnt++;
        }

        if(cnt<=k) return 0;
        int ans=0;
        int v=0;
        for(int i=0;i<26;i++){
            if(freq[i]>0 && v<cnt-k){
                ans+=freq[i];
                v++;
            }
        }
        return ans;

    }
};