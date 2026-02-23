class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string x="";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(x.find(s[i])==string::npos){
                x+=s[i];
            }else{
                x=x.substr(x.find(s[i])+1);
                x+=s[i];
            }
            count=max(count,(int)x.size());
            
        }
        return count;
    }
};