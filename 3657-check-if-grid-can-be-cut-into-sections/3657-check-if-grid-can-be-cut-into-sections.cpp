class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pair<int, int>>x_axis, y_axis;
        for(int i=0;i<rectangles.size();i++){
            x_axis.push_back({rectangles[i][0], rectangles[i][2]});
            y_axis.push_back({rectangles[i][1], rectangles[i][3]});
        }

        sort(x_axis.begin(), x_axis.end());
         
          sort(y_axis.begin(), y_axis.end());
        //    [](const int &a, const int& b){
        //     return a[0]<b[0];
        // });

        vector<vector<int>>result_x, result_y;
        result_x.push_back({x_axis[0].first, x_axis[0].second});
        for(int i=1;i<x_axis.size();i++){
            if(x_axis[i].first<result_x.back()[1]){
                result_x.back()[0]=min(x_axis[i].first, result_x.back()[0]);
                result_x.back()[1]=max(x_axis[i].second, result_x.back()[1]);
            }
            else{
                result_x.push_back({x_axis[i].first, x_axis[i].second});
            }
        }

        result_y.push_back({y_axis[0].first, y_axis[0].second});
        for(int i=1;i<y_axis.size();i++){
            if(y_axis[i].first<result_y.back()[1]){
                result_y.back()[0]=min(y_axis[i].first, result_y.back()[0]);
                result_y.back()[1]=max(y_axis[i].second, result_y.back()[1]);
            }
            else{
                result_y.push_back({y_axis[i].first, y_axis[i].second});
            }
        }
        if(result_x.size()>=3 || result_y.size()>=3) return true;
        return false;
    }
};