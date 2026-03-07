class Solution {
public:
 vector<int>generateRow(int row){
        int ans=1;
        vector<int>anss;
        anss.push_back(1);
        for(int col=1;col<row;col++){
            ans*=(row-col);
            ans/=col;
            anss.push_back(ans);
        }
        return anss;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int row=1;row<=numRows;row++){
            ans.push_back(generateRow(row));
        }
        return ans;
    }
};