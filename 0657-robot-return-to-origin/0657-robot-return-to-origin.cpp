class Solution {
public:
    bool judgeCircle(string moves) {

        int r_count = 0, l_count = 0, u_count = 0, d_count = 0;

        for (auto i : moves) {
            if (i == 'U')
                u_count++;
            else if (i == 'D')
                d_count++;
            else if (i == 'R')
                r_count++;
            else
                l_count++;
        }

        if (u_count == d_count && l_count == r_count)
            return true;
        else
            return false;
    }
};