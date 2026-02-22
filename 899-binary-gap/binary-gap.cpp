class Solution {
    string toBinary(int n) {
        if(n==0) return "0";

        string bin_str = "";
        while(n>0) {
            int rem = n%2;
            bin_str = to_string(rem) + bin_str;
            n /= 2;
        }

        return bin_str;
    }
public:
    int binaryGap(int n) {
        string bin = toBinary(n);
        int size = bin.size();
        int max_dist = 0;
        int i=0;

        while(i<size) {
            if(bin[i] == '1') {
                int dist = 0;
                int k = i+1;
                while(k<size && bin[k] != '1' ) {
                    dist++;
                    k++;
                }
                dist++;
                if(k<size) max_dist = (dist > max_dist) ? dist : max_dist;
                i = k;
            }
        }

        cout<<bin;
        return max_dist;
    }
};