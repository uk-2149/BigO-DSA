class Solution {
    void f(int s, int e, int t, int w, vector<vector<char>>& matr, int m, int n, int r, int c) {
        // south
        while(s<m && matr[s][c]!='W' && matr[s][c]!='G') {
            matr[s][c] = 'N';
            s++;
        }
        // east
        while(e<n && matr[r][e]!='W' && matr[r][e]!='G') {
            matr[r][e] = 'N';
            e++;
        }
        // north
        while(t>=0 && matr[t][c]!='W' && matr[t][c]!='G') {
            matr[t][c] = 'N';
            t--;
        }
        // west
        while(w>=0 && matr[r][w]!='W' && matr[r][w]!='G') {
            matr[r][w] = 'N';
            w--;
        }
    }
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int count = 0;
        vector<vector<char>> matr(m, vector<char>(n, 'U'));
        int g_size = guards.size();
        int w_size = walls.size();
        for(int g=0; g<g_size; g++) {
            matr[guards[g][0]][guards[g][1]] = 'G';
        }
        for(int w=0; w<w_size; w++) {
            matr[walls[w][0]][walls[w][1]] = 'W';
        }
        for(int r=0; r<m; r++) {
            for(int c=0; c<n; c++) {
                if(matr[r][c]=='N' || matr[r][c]=='W') continue;
                if(matr[r][c]=='G') {
                    int s = r+1;
                    int e = c+1;
                    int t = r-1;
                    int w = c-1;
                    f(s, e, t, w, matr, m, n, r, c);
                }
            }
        }
        for(int r=0; r<m; r++) {
            for(int c=0; c<n; c++) {
                if(matr[r][c] == 'U') count++;
            }
        }
        return count;
    }
};