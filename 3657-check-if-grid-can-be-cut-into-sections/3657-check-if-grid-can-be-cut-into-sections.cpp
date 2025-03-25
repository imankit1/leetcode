class Solution {
public:

vector<vector<int>>merge(vector<vector<int>>& rectangles){
     sort(rectangles.begin(), rectangles.end());

        vector<vector<int>>result;
        result.push_back(rectangles[0]);
        for(int i=1;i<rectangles.size();i++){
            if(rectangles[i][0]<result.back()[1]){
                result.back()[1]=max(result.back()[1], rectangles[i][1]);
            }
            else{
                result.push_back(rectangles[i]);
            }
        }
    return result;
}
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
       vector<vector<int>>x, y;
       for(auto &i :rectangles){
        x.push_back({i[0], i[2]});
        y.push_back({i[1], i[3]});
       }

       vector<vector<int>>result1=merge(x);
       vector<vector<int>>result2=merge(y);

       if(result1.size()>=3 || result2.size()>=3) return true;
       return false;
    }
};