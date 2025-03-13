class Solution {
public:
    int n;
    int q;


    bool check(vector<int>& nums, vector<vector<int>>& queries, int k){
        vector<int>diff(n, 0);
        for(int i=0;i<=k;i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int v=queries[i][2];

            diff[l]+=v;
            if(r+1<n)
            diff[r+1]-=v;

        }

        int cummSum=0;
        for(int i=0;i<n;i++){
            cummSum+=diff[i];
            diff[i]=cummSum;

            if(nums[i]-diff[i]>0){
                return false;
            }
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        n=nums.size();
        q=queries.size();

        auto lambda=[](int x){
            return x==0;
        };

         if(all_of(begin(nums), end(nums), lambda)) return 0;

        int s=0;
        int e=q-1;
        int k=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(nums, queries, mid)==true){
                k=mid+1;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return k;
    }
};