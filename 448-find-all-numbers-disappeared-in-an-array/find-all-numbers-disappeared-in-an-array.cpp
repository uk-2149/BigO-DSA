class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int> res;
        vector<bool> map(n+1, false);

        for(int i : nums) {
            map[i] = true;
        }

        for(int i=1; i<=n; i++) {
            if(!map[i]) res.push_back(i);
        }

        return res;
    }
};