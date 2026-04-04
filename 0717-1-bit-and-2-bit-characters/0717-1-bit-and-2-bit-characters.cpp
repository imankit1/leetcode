class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
       int i=0;
        for(i=0;i<bits.size();i++){
            if(bits[i]==1){
                i++;
                continue;
            }
            if(i==bits.size()-1) return true; 
        }
        return false;
    }
};