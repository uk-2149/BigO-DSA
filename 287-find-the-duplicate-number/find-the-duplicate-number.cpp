class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> arr(100001, 0);
        for(int i : nums) {
            arr[i]++;
            if(arr[i]>1) return i;
        }
        return -1;
    }
};