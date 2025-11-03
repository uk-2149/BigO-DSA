class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        char prev;
        int time = 0;
        for(int i=1; i<n; i++) {
            if(colors[i]==colors[i-1]) {
                int sum = neededTime[i-1];
                int mx = neededTime[i-1];
                while(colors[i]==colors[i-1]) {
                    if(neededTime[i]>mx) mx = neededTime[i];
                    sum += neededTime[i];
                    i++;
                }
                time += (sum-mx);
            }
        }
        return time;
    }
};