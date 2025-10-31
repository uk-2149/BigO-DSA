class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> temp(101,0);
        vector<int> res;
        for(int i : nums) {
            if(temp[i] == 1) {
                res.push_back(i);
            } 
            temp[i]++;
        }
        return res;
    }
};