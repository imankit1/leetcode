class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1, j=b.size()-1;
        int carry=0;
        while(i>=0 && j>=0){
            int m=a[i]-'0';
            int n=b[j]-'0';
            int sum=m+n+carry;
            ans+=to_string(sum%2);
            carry=sum/2;
            i--;
            j--;
        }
        while(i>=0){
             int m=a[i]-'0';
             int sum=m+carry;
             ans+=to_string(sum%2);
             carry=sum/2;
             i--;
        }
        while(j>=0){
             int m=b[j]-'0';
             int sum=m+carry;
             ans+=to_string(sum%2);
             carry=sum/2;
             j--;
        }
        if(carry>0) ans+=to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;

    }
};