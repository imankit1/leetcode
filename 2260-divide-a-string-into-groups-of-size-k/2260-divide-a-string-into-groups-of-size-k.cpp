class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int i=0;
        int n=s.size();
        for(i=0;i<n-n%k;i++){
            string substr=s.substr(i, k);
            ans.push_back(substr);
            i+=(k-1);
        }
        
        if(i<n){
            int rem=n-i;
            string m=s.substr(i, rem);
            while(m.size()<k){
                m.push_back(fill);
            }
            ans.push_back(m);

        }
        return ans;
    }
};