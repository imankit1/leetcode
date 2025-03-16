class Solution {
public:

    bool possible(vector<int>& rank, int cars, long long mid){
        long long totalcar=0;
        for(int i=0;i<rank.size();i++){
            totalcar+=sqrt(mid/rank[i]);
             
        }
        if(totalcar>=cars) return true;
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        int high_rank=*max_element(ranks.begin(), ranks.end());
        long long e =1LL* cars *cars*  high_rank;
        long long s=1;
        long long ans=-1;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(possible(ranks, cars, mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};