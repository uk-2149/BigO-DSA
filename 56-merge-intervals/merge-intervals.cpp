class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<n; i++){
            int r = intervals[i][1];
            vector<int> fin(2);
            fin[0] = intervals[i][0];
            int j;
            for(j=i+1; j<n; j++){
                if(intervals[j][0]<=r) {
                    r=max(r, intervals[j][1]);
                } else { break; }
            }
            fin[1] = r;
            res.push_back(fin);
            i = j-1;
        }
        return res;
    }
};