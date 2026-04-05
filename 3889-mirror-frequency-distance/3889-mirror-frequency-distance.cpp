class Solution {
public:
    int mirrorFrequency(string s) {

        int n=s.size();
        unordered_map<int, int>mp_c;
        unordered_map<int, int>mp_d;
        for(int i=0;i<n;i++){
          if(!isdigit(s[i]))  mp_c[s[i]-'a']++;
          else mp_d[s[i]-'0']++;
        }

     

        int res=0;
        for(int i=0;i<n;i++){
             if(!isdigit(s[i]) && mp_c.find(s[i]-'a')!=mp_c.end()){
                    int freq_c=mp_c[s[i]-'a'], freq_m=0;
                    freq_m=mp_c[25-(s[i]-'a')];
                    res+=abs(freq_c-freq_m);
                    mp_c.erase(s[i]-'a');
                    mp_c.erase(25-(s[i]-'a'));  
                    // cout<<freq_c<<" "<<freq_m<<endl;
             }
             else{ 
                if(mp_d.find(s[i]-'0')!=mp_d.end()){
                    int freq_c=mp_d[s[i]-'0'], freq_m=0;
                    freq_m=mp_d[9-(s[i]-'0')];
                    res+=abs(freq_c-freq_m);
                    mp_d.erase(s[i]-'0');
                    mp_d.erase(9-(s[i]-'0'));  
                }
                
             }
        }
        return res;
    }
};