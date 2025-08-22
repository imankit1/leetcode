class Solution {
public:

int onedArray(vector<int>& v){
    int count=0;
    int subCount=0;

    for(auto &n : v){
        if(n==0){
            count=0;
        }else{
            count++;
        }
        subCount+=count;
    }
    return subCount;
}
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        int result=0;

        for(int s=0;s<m;s++){

            vector<int>v(n, 1);

            for(int e=s;e<m;e++){

                for(int c=0;c<n;c++){
                    v[c]=v[c]&mat[e][c];
                }

                result+=onedArray(v);
            }
        }

        return result;
    }
};