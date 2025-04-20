class Solution {
public:
    long long calculateScore(vector<string>&ins , vector<int>& val) {
        int i = 0;
        int n = ins.size();
        long long ans = 0;
        unordered_set<int> st;
        while (i >= 0 && i < n) {
            if (st.find(i) != st.end()) break; // Already visited => loop
            st.insert(i);
            
            if (ins[i] == "add") {
                ans += val[i];
                i += 1;
            } else if (ins[i] == "jump") {
                i += val[i];
            }
        }
        return ans;

       
    }
};