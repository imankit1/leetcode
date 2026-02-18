class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last_bit=-1;
        while(n>0){
            int curr_bit=n%2;
            if(curr_bit==last_bit) return false;
            else last_bit=curr_bit;
            n/=2;
        } 
        return true;
    }
};