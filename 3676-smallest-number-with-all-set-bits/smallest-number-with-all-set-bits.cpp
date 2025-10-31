class Solution {
public:
    int smallestNumber(int n) {
        int x = n;
        while((x + 1) & x) x++;
        return x;
    }
};