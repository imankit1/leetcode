class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        long long total_cell=n*n;
        if(total_cell*w<=maxWeight) return total_cell;
        else{
            return maxWeight/w;
        }
    }
};