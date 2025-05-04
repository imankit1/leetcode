class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        int cnt=0;
        // for(int i=0;i<n-1;i++){
        //     if(tops[i]!=bottoms[i+1] && bottoms[i]!=tops[i+1] && tops[i]!=tops[i+1] && bottoms[i]!=bottoms[i+1]) return -1;
        // }
        unordered_map<int, int>mpp;
        for(auto t :tops) mpp[t]++;
        for(auto b:bottoms) mpp[b]++;

        int maxii=0;
        int maxiin=0;
        for(auto i:mpp){
            if(maxii<i.second){
                maxii=i.second;
                maxiin=i.first;
            }
        }
        int topsMaxii=0;
        int bottomMaxii=0;
        for(auto t :tops){
            if(t==maxiin) topsMaxii++;
        }
        for(auto b:bottoms){
            if(b==maxiin) bottomMaxii++;
        }

        if(topsMaxii>=bottomMaxii){
            for(int i=0;i<n;i++){
                if(tops[i]==maxiin) continue;
                else if(bottoms[i]==maxiin) cnt++;
                else return -1;
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(bottoms[i]==maxiin) continue;
                else if(tops[i]==maxiin) cnt++;
                else return -1;
            }
        }
       
        return cnt;
    }
};