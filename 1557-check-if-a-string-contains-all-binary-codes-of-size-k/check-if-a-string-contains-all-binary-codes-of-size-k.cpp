class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int tot = pow(2, k);
        int n = s.size();
        set<string> combs;
        for(int i=0; i<n; i++) {
            string p = "";
            if(i+k>n) break;
            for(int j=i; j<(i+k); j++) {
                p += s[j];
            }
            combs.insert(p);
        }
        if(combs.size() < tot) return false;
        return true;
    }
};