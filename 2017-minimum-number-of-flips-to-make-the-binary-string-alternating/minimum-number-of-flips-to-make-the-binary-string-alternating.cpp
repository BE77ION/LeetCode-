class Solution {
public:
    int minFlips(string s) {
        int res=INT_MAX;
        int n=s.size();
        string S=s+s;
        int count1=0;
        int count2=0;
        for(int i=0;i<S.size();i++){
            if(S[i]!=(i%2?'1':'0'))count1++;
            if(S[i]!=(i%2?'0':'1'))count2++;
            if(i>=n){
                 if(S[i-n]!=((i-n)%2?'1':'0'))count1--;
            if(S[i-n]!=((i-n)%2?'0':'1'))count2--;
            }
            if(i>=n-1){
                res=min(res,min(count1,count2));
            }
        }
        return res;
    }
};