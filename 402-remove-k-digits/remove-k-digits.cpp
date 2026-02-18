class Solution {
public:
    string removeKdigits(string num, int k) {
    stack<char>s;
    s.push(num[0]);
    if(k==num.length())return "0";
    for(int i=1;i<num.length();i++){
        while(!s.empty()&&num[i]<s.top()&&k>0){
            s.pop();
            k--;
        }
        s.push(num[i]);
    }
    while(k>0){
        s.pop();
        k--;
    }
    string res="";
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    reverse(res.begin(),res.end());
    int i=0;
    while(i<res.length()&&res[i]=='0'){
        i++;
    }
    res=res.substr(i);
    return res==""?"0":res;
    }
};