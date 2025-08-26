class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dim) {
        int m=dim.size();  //row
      

        int area=0;
        double max_diagonal=0;

        for(int i=0;i<m;i++){
                double d_len=sqrt((dim[i][0]* dim[i][0]) + 
                (dim[i][1]*dim[i][1]));
                cout<<d_len<<endl;
                if(d_len>=max_diagonal){
                    if(d_len==max_diagonal){
                    area=max(area, (dim[i][0]*dim[i][1]));
                    max_diagonal=d_len;
                    continue;
                    }
                    max_diagonal=d_len;
                    area=dim[i][0]*dim[i][1];
                }
        }
        return area;
    }
};