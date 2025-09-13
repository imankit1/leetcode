class Solution {
public:
    int maxFreqSum(string s) {
        vector<int>count(26, 0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        int maxVowel=0;
        int maxCons=0;
        for(int i=0;i<26;i++){
            if(i==0 || i==4 || i==8 || i==14 ||i==20){
                maxVowel=max(maxVowel, count[i]);
            }
            else{
                    maxCons=max(maxCons, count[i]);
            }
        }
        return maxVowel+maxCons;
    }
};