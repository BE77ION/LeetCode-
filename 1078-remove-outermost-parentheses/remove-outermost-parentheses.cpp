class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count=0;
        for(auto i:s){
            if(i==')'){
                count--;
            }
            if(count!=0){
                ans+=i;
            }
            if(i=='('){
                count++;
            }
        }
        return ans;
    }
};