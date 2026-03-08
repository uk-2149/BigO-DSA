class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        set<string> s(nums.begin(), nums.end());
        string k = "0";
        for(int i=1; i<n; i++) k += '0';
        if(!s.count(k)) return k;
        for(int i=0; i<pow(2, n); i++) {
            k[i%n] = (k[i%n] == '0') ? '1' : '0';
            if(!s.count(k)) return k;
        }
        return k;
    }
};