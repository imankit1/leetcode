class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            if(s.size()%2!=0) continue;

            int sumFront=0, sumBack=0;
            for(int j=0;j<s.size()/2;j++){
                sumFront+=s[j]-'0';
                sumBack+=s[s.size()-j-1]-'0';
            }
            if(sumFront==sumBack) count++;
        }
        return count;
    }
};