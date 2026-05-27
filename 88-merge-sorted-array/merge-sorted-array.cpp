class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=0, r=0;
        while(l<m+n && r<n) {
            if(nums1[l]<nums2[r]) {
                l++;
            } else {
                for(int i=m+n-1; i>l; i--) {
                    nums1[i] = nums1[i-1];
                }
                nums1[l] = nums2[r];
                l++;
                r++;
            }
        }
        l = l - (n-r);
        while(l<m+n &&r<n) {
            nums1[l] = nums2[r];
            l++;
            r++;
        }
    }
};