class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        int right=s.size()-1;
        string res;
        while(right>=0){
            while(right>=0&&s[right]==' '){
            right--;
            }
        if(right<0)break;
        int j=right;
        while(j>=0&&s[j]!=' ')j--;
        
        if(!res.empty())res+=" ";
        res+=s.substr(j+1,right-j);

        right=j;
        }
        return res;
    }
};