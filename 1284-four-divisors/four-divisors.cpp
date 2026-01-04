class Solution {
    int checker(int num) {
        int cnt = 0;
        int sum = 0;
        for(int i=1; i<=num; i++) {
            if(cnt>4) return 0;
            if(num%i==0) {
                cnt++;
                sum += i;
            }
        }
        if(cnt!=4) return 0;
        return sum;
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int> temp(100001, 0);
        int sum = 0;
        for(int x : nums) {
            if(temp[x]!=0) {
                sum += temp[x];
                continue;
            }
            int divSum = checker(x);
            if(divSum) {
                temp[x] = divSum;
                sum += divSum;
            }
        }
        return sum;
    }
};