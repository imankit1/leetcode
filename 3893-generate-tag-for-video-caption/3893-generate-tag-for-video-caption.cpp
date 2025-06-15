class Solution {
public:
    string generateTag(string caption) {
        string ans="#";
        bool isSpace=false;
        int j=0;
        while(caption[j]==' ') j++;
              if(j<caption.size())  ans+=tolower(caption[j]);
        for(int i=j+1;i<caption.size();i++){
             
            if(caption[i]==' '){
                isSpace =true;
            }
            else if(isSpace==true){
                ans+=toupper(caption[i]);
                isSpace=false;
            }

            else {
                ans+=tolower(caption[i]);
            }
        }  
        j=ans.size()-1;
        while(ans[j]==' '){
            j--;
        }
        // ans=ans.substr(0,j+1);
        return (ans.size()>100) ? ans.substr(0, 100): ans; 
    }
};