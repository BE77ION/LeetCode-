class Solution {
public:
    int minOperations(string s) {
        int zero = 0;
        int one = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if(s[i]!=(i%2?'0':'1'))one++;
            if(s[i]!=(i%2?'1':'0'))zero++;
        }
    return min(one, zero);
}
}
;