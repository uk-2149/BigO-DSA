class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=0;
        int n = nums.size();
        int max = INT_MIN;
        int sum = 0;
        while(l<n){
            sum += nums[l];
            if(sum>max) max = sum;
            if(sum<0) sum=0;
            l++;
        }
        return max;
    }
};