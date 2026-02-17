class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {

        vector<string>result;
        for(int i=0;i<=11;i++){  //for hours
                for(int j=0;j<=59;j++){ //for minutes

                    if(__builtin_popcount(i)+__builtin_popcount(j)==turnedOn){
                        string h=to_string(i);
                        string m=(j<10 ? "0" : "")+ to_string(j);
                        result.push_back(h+":"+m);
                    }
                    // cout<<__builtin_popcount(j)<<endl;

                }
        }
        return result;
    }
};