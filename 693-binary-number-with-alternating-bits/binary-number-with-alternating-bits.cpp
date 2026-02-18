class Solution {
public:
    bool hasAlternatingBits(int n) {
       
        string bin="";

        while(n>0){
            if(n%2==1)bin+='1';
            else bin+='0';
            n=n/2;
        }
        for(int i=1;i<bin.size();i++){
            if(bin[i]==bin[i-1]){
                return false;
            }
        }
        return true;
    }
};