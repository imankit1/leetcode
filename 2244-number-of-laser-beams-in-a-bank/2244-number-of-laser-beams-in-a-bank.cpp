class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;

        int laserCount=0;
        
        for(int i=0;i<bank.size();i++){
             int cnt=0;
            string temp=bank[i];
            for(int j=0;j<temp.size();j++){
                if(temp[j]=='1') cnt++;
            }

            if(cnt>0){
            ans=ans+(laserCount*cnt);
            laserCount=cnt;
            }
        }

        return ans;

    }
};