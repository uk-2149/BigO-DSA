class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        int m = patterns.size();
        for(int i=0; i<m; i++) {
            string k = patterns[i];
            if(word.contains(k)) {
                cnt++;
            }
        }
        return cnt;
    }
};