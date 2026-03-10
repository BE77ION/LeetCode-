class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char>ss;
        
        for(auto i:s){
            if(i=='('){
                if(!ss.empty()){
                    ans+=i;
                }
                ss.push(i);
            }else{
                ss.pop();
                 if(!ss.empty()){
                    ans+=i;
                }
            }
        }
        return ans;
    }
};