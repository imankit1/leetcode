class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        string b=s;
         
        char f=s[0];
        for(int i=0;i<s.size();i++){
             if(s[i]!='9'){
             f=s[i];
             break;
             }         
        }

        for(int i=0;i<s.size();i++){
             if(s[i]==f) s[i]='9';      
        }
        char m=b[0];
        for(int i=0;i<b.size();i++){
            if(b[i]==m) b[i]='0';
        }


         
        return stoi(s)-stoi(b);
        
    }
};