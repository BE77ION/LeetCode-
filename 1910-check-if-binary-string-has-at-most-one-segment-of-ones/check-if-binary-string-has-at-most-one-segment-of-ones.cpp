class Solution {
public:
    bool checkOnesSegment(string s) {
        int seenzero=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                seenzero=true;
            }else if(s[i]=='1'&&seenzero){
                return false;
            }
        }
        return true;
    }
};