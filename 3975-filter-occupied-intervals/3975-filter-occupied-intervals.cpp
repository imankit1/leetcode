class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& o, int fs,
                                                int fe) {

sort(o.begin(), o.end());
        vector<vector<int>> temp;
        int n = o.size();
      for (auto &it : o) {
    if (temp.empty() || it[0] > temp.back()[1] + 1) {
        temp.push_back(it);
    } else {
        temp.back()[1] = max(temp.back()[1], it[1]);
    }
}

        vector<vector<int>>res;
       for (int i = 0; i < temp.size(); i++) {
    int start = temp[i][0];
    int end = temp[i][1];

    // No overlap
    if (end < fs || start > fe) {
        res.push_back({start, end});
    }
    // Interval completely covers [fs, fe]
    else if (start < fs && end > fe) {
        res.push_back({start, fs - 1});
        res.push_back({fe + 1, end});
    }
    // Left overlap
    else if (start < fs && end >= fs) {
        res.push_back({start, fs - 1});
    }
    // Right overlap
    else if (start <= fe && end > fe) {
        res.push_back({fe + 1, end});
    }
    // Else: interval lies completely inside [fs, fe], so discard it.
}
        return res;
    }
};