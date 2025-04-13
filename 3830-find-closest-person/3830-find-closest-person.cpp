class Solution {
public:
    int findClosest(int x, int y, int z) {
        int x_pos=abs(z-x);
        int y_pos=abs(z-y);
        if(x_pos<y_pos) return 1;
        if(x_pos>y_pos) return 2;
         return 0;
    }
};