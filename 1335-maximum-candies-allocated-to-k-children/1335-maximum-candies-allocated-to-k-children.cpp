class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        // int totalCandies=0;
        int maxCand=0;
        for(int i=0;i<candies.size();i++){
            // totalCandies+=candies[i];
            maxCand=max(maxCand, candies[i]);
        }
        // if(totalCandies<k) return 0;
        int s=1, e=maxCand;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long count=0;
            for(int j=0;j<candies.size();j++){
                count+=candies[j]/mid;
            }

            if(count>=k){
             ans=mid;
             s=mid+1;

            }
        else{
            e=mid-1;
        }
        }

        return ans;
        // for(int i=maxCand;i>=1;i--){
        //     long long count=0;
        //     for(int j=0;j<candies.size();j++){
        //         count+=candies[j]/i;
        //     }
        //     if(count>=k) return i;
        // }
        // return 0;
    }
};