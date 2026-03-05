class Solution {
public:
    int minOperations(string s) {
        int zero = 0;
        int one = 0;
        string t=s;
        for (int i = 1; i < t.size(); i++) {
            if(t[i]==t[i-1]){
                zero++;
                t[i]=(t[i]=='0')?'1':'0';
            }
        }
        t=s;
        if(t[0]=='1')t[0]='0';
        else t[0]='1';
        one++;

         for (int i = 1; i < t.size(); i++) {
            if(t[i]==t[i-1]){
                one++;
                t[i]=(t[i]=='0')?'1':'0';
            }
        }
    return min(one, zero);
}
}
;