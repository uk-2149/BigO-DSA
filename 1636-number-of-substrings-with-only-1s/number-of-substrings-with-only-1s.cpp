class Solution {
public:
    int numSub(string s) {
        const int MOD = 1e9 + 7;
        int n = s.size();
        long long ans = 0;
        string temp;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                temp = s[i];
                ans++;
                i++;
                int count = 1;
                while(i<n && s[i]=='1') {
                    temp += s[i];
                    ans += (count+1);
                    count++;
                    i++;
                }
            }
        }
        ans = ans % MOD;
        return ans;
    }
};