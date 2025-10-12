class Solution {
public:
    bool scoreBalance(string s) {
            int sum=0;
        for(int i=0;i<s.size();i++)
            sum+=(s[i]-'a'+1);

            int sum_first=0;
            for(int i=0;i<s.size();i++){
                sum_first+=(s[i]-'a'+1);

                if(sum==sum_first*2) return true;
            }

          

        return false;
    }
};