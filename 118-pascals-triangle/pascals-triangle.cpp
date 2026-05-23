class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i=0; i<numRows; i++) {
            vector<int> row(i+1);
            for(int j=0; j<=i; j++) {
                if(j==0 || j==i) {
                    row[j] = 1;
                    continue;
                }
                if(i>0) {
                    row[j] = res[i-1][j-1] + res[i-1][j];
                }
            }
            res[i] = row;
        }
        return res;
    }
};