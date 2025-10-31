class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        unordered_map<int, int> map;
        for(int i=1; i<=n; i++){
            map[i] = 0;
        }
        for(int i : nums){
            map[i]++;
        }
        for(auto& x : map){
            if(!x.second) res.push_back(x.first);
        }
        return res;
    }
};