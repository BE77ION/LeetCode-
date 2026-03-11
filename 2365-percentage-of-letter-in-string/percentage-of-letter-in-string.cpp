class Solution {
public:
    int percentageLetter(string s, char letter) {
        int p=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==letter){
                count++;
            }
        }
        int n=s.size();
        p=(count*100)/n;
        return p;
    }
};