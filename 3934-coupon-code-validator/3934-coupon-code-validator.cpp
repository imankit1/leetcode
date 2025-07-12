class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {
       vector< pair<string, string> > ans;

        int n = code.size();

        for (int i = 0; i < n; i++) {
            if (isActive[i] == true) {
                if (businessLine[i] == "electronics" ||
                    businessLine[i] == "grocery" ||
                    businessLine[i] == "pharmacy" ||
                    businessLine[i] == "restaurant") {
                    string temp = code[i];
                    bool flag = true;
                    if (temp.empty())
                        flag = false;
                    for (char ch : temp) {
                        if (!isalnum(ch) && ch != '_') {
                            flag = false;
                            break;
                        }
                    }
                if (flag == true)
                    ans.push_back({businessLine[i],code[i]});
                }
            }
        }

        sort(ans.begin(), ans.end());
        vector<string>temp;
        for(auto i: ans){
            temp.push_back(i.second);
        }

        return temp;
}
};