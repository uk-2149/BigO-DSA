// #define uset unordered_set
// #define all(v) (v).begin(),(v).end()
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<pair<int, int>> freq(1e6, {0 , 0});
        vector<int> res;
        for(int i : nums) {
            freq[i].first++ ;
        }

        // uset<int> s(all(nums)) ;
        for(int i=0; i<freq.size(); i++) {
            if(freq[i].first == 2) {
                if(!freq[i].second) {
                    res.push_back(i);
                    freq[i].second = 1;
                } 
            } 
        }
        return res;
    }
};