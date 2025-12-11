class Solution {
public:
    int countCoveredBuildings(int fr, vector<vector<int>>& buildings) {
        
        unordered_map<int, vector<int>>X;
        unordered_map<int, vector<int>>Y;

        int n=buildings.size();
        for(int i=0;i<n;i++){
            X[buildings[i][0]].push_back(buildings[i][1]);
            Y[buildings[i][1]].push_back(buildings[i][0]);
        }

        for(auto &i:X){
            sort(i.second.begin(), i.second.end());
        }
        for(auto &i:Y){
            sort(i.second.begin(), i.second.end());
        }


        int cnt=0;
         for (auto &p : X) {
            auto &col = p.second;

            if (col.size() < 3) continue; 

             
            for (int j = 1; j < (int)col.size() - 1; j++) {

                int ymid = col[j];       
                auto &row = Y[ymid];    

                if (row.size() < 3) continue;

                
                if (row.front() < p.first && row.back() > p.first)
                    cnt++;
            }
        }
        

        return cnt;
    }
};