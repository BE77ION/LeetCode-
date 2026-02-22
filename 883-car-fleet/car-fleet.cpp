class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>s;
        for(int i=0;i<speed.size();i++){
            s.push_back({position[i],(double)(target-position[i])/speed[i]});
        }
        sort(s.begin(),s.end());
        double lasttime=0;
        int fleet=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i].second>lasttime){
                fleet++;
                lasttime=s[i].second;
            }
        }
        return fleet;
    }
};