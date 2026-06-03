class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        if(target<matrix[0][0] || target>matrix[n-1][m-1]) return false;
        int i=0, k=0; 
        int j=m-1;
        while(i<=j){
            if(k<n){
                int mid = (i+j)/2;
                int el = matrix[k][mid];
                if(el==target) return true;
                if(el<target) i = mid+1;
                if(el>target) j = mid-1;
                if(mid==j){
                    k++;
                    i=0;
                    j=m-1;
                }
            } else {
                break;
            }
        }
        return false;
    }
};