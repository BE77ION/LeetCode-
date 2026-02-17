class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>res;
        for(int hour=0;hour<12;hour++){
            for(int minu=0;minu<60;minu++){
                if(__builtin_popcount(hour)+__builtin_popcount(minu)==turnedOn){
                    string time=to_string(hour)+":";
                    if(minu<10){
                        time+="0";
                    }
                    time+=to_string(minu);
                    res.push_back(time);
                }
            }
        }
        return res;
    }
};