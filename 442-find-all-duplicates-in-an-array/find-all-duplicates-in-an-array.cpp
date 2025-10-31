#define uset unordered_set
#define all(v) (v).begin(),(v).end()
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> freq(1e6, 0);
        vector<int> res;
        for(int i : nums) {
            freq[i]++;
        }

        uset<int> s(all(nums)) ;
        for(int i : s) {
            if(freq[i] == 2) res.push_back(i);
        }
        return res;
    }
};