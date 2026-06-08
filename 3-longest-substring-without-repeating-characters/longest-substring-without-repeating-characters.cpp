class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        int l=0;
        int mx_len=0;
        for(int r=0; r<n; r++) {
            if(mp.find(s[r])!=mp.end()) {
                l = max(mp[s[r]]+1, l);
            }
            mp[s[r]] = r;
            mx_len = max(mx_len, r-l+1);
        }
        return mx_len;
    }
};