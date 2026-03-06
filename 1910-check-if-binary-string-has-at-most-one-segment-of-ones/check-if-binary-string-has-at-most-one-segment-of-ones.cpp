class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i=s.size()-1;i>0;i--){
            if(s[i]=='1'&&s[i-1]=='0'){
                return false;
            }
        }
        return true;
    }
};