class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int pos = 0;
        for (int i = 0; i < m; i++) {
            int count = 0;
            int colindex=-1;
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    count++;
                    colindex=j;
                }
            }
            if (count == 1) {

                for (int k = 0; k <m ; k++) {
                    if (mat[k][colindex] == 1) {
                        count++;
                    }
                }
                if (count == 2) {
                pos++;
            }
            }
            
        }
        return pos;
    }
};