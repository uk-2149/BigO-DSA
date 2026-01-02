class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        vector<int> freq(10001, 0);
        for(int x : nums) {
            freq[x]++;
            if(freq[x]==n) return x;
        }
        return -1;
    }
};