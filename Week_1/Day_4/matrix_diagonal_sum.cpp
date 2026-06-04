class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int sum=0;
        int mid=(n&1)? (n+1)/2: -1;
        for(int i=0; i<n; i++){
            sum+=mat[i][i];
            sum+=mat[i][n-1-i];
        }
        return (mid==-1)? sum: sum-mat[mid-1][mid-1];
    }
};