class Solution {
public:
    bool isValid(string s) {
        int n=s.size();


        bool digit=false;
        bool upper=false, lower=false;
        bool vowel=false;
        bool consonant=false;
        for(int i=0;i<n;i++){
            if(n<3) return false;
            else if(s[i]=='@' || s[i]=='#' || s[i]=='$') return false;
            else if(isdigit(s[i])) digit=true;
            else if(islower(s[i])  || isupper(s[i])){
               lower=true;
               lower=true;
                  char t=tolower(s[i]);
            if(t=='a' || t=='e' || t=='i' 
            || t=='o' || t=='u') vowel=true;


              else consonant=true;

            } 
            
          

            

        }
            if(vowel && (digit || lower ||upper) && consonant ) return true;

        return false;
    }
};