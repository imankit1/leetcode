class Solution {
public:
bool isVowel(char ch) {
    ch = tolower(ch);   
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
    string sortVowels(string s) {
        vector<char>vowel;
        for(auto i: s){
            if(isVowel(i)){
                vowel.push_back(i);
            }
        }
        sort(vowel.begin(), vowel.end());
        string ans="";
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(tolower(s[i]))){
                ans+=vowel[idx++];
                
            }
            else ans+=s[i];
        }
        return ans;
    }
};