class Solution {
public:
    bool checkOnesSegment(string s) {
        bool z = false;
        for(auto &k : s) {
            if(k=='0') z = true;
            if(z && k=='1') return false;
        }
        return true;
    }
};