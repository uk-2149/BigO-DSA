class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> freq;
        int i = 0;
        int end = 0;
        while(end<n) {
            end = i+k;
            vector<pair<int, int>> temp;
            int sum = 0;
            for(int j=i; j<end; j++) {
                freq[nums[j]]++;
            }
            for(auto& y : freq) {
                temp.push_back({y.second, y.first});
            }
            if(temp.size()<x) {
                for(int j=i; j<end; j++) {
                    sum += nums[j];
                }   
            } else {
                sort(temp.rbegin(), temp.rend());
                for(int l=0; l<x; l++) {
                    sum += temp[l].first * temp[l].second;
                }
            }
            res.push_back(sum);
            freq.clear();
            i++;
        }
        return res;
    }
};