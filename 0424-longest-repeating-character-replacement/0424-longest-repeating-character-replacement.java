// Brute force

class Solution {
  public:
    int longestSubstr(string& s, int k) {
        // code here
        int n=s.size();
        int maxii=INT_MIN; 
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=i+1;j<n;j++){
                if(s[i]!=s[j]){
                    cnt++;
                }
                if(cnt>k){
                    break;
                }
                maxii=max(maxii, j-i+1);
            }
        }
        return maxii;
    }
};

// ______________________________________________________________________
//     Optimize approach 



class Solution {
    public int characterReplacement(String s, int k) {
        int r=0, l=0, maxf=0, maxl=0;
        int hash[]=new int [26];
        while(r<s.length()){
            hash[s.charAt(r)-'A']++;
            maxf=Math.max(maxf, hash[s.charAt(r)-'A']);
            
            while((r-l+1)-maxf > k){
                maxf=0;
                hash[s.charAt(l)-'A']--;
                for(int i=0;i<26;i++){
                    maxf=Math.max(maxf, hash[i]);
                }
                l=l+1;
            }
            if((r-l+1)-maxf<=k){
                maxl=Math.max(maxl, r-l+1);
            }
            r++;
        }
        return maxl;
    }
}
