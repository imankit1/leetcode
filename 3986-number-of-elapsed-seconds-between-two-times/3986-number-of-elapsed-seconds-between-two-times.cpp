class Solution {
public:

    int convertSecond(string startTime){
        int h = stoi(startTime.substr(0, 2))*60*60;
        int m = stoi(startTime.substr(3, 2))*60;
        int s = stoi(startTime.substr(6, 2));
        int sumStartTime = h + m + s;
        return sumStartTime;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int sumStartTime = convertSecond(startTime);
        int sumendTime = convertSecond(endTime);
        return sumendTime - sumStartTime;
    }
};