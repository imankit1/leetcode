class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h = stoi(startTime.substr(0, 2))*60*60;
        int m = stoi(startTime.substr(3, 2))*60;
        int s = stoi(startTime.substr(6, 2));

        int h1 = stoi(endTime.substr(0, 2))*60*60;
        int m1 = stoi(endTime.substr(3, 2))*60;
        int s1 = stoi(endTime.substr(6, 2));
        

        int sumStartTime = h + m + s;
        int sumendTime = h1 + m1 + s1;
        return sumendTime - sumStartTime;
    }
};