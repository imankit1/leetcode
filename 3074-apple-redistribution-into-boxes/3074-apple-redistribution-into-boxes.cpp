class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        sort(capacity.begin(), capacity.end());

        int appleSum=0;
        for(auto i:apple) appleSum+=i;

        int n=capacity.size();
        for(int j=n-1;j>=0;j--){
            appleSum-=capacity[j];
            if(appleSum<=0) return n-j;
        }
        return 0;
    }
};