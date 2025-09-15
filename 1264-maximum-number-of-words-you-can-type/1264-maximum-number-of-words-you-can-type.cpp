class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string temp="";
        int cnt=0;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                 
                 bool flag=false;
                for(int j=0;j<brokenLetters.size();j++){
                    for(int k=0;k<temp.size();k++){
                        if(temp[k]==brokenLetters[j]){
                            flag=true;
                            break;
                        }
                    }
                    if(flag==true) break;
                }
                 if(flag==false) cnt++;
                 temp="";
            }
            else temp+=text[i];
        }

        bool flag=false;

        for(int j=0;j<brokenLetters.size();j++){
                    for(int k=0;k<temp.size();k++){
                        if(temp[k]==brokenLetters[j]){
                            flag=true;
                            break;
                        }
                    }
                    if(flag==true) break;
                }
                 if(flag==false) cnt++;

        return cnt;
    }
};