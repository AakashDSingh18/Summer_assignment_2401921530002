class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> newMatrix(r, vector<int>(c,0));
        int n= mat.size();
        int m= mat[0].size();
        if(r*c!=n*m) return mat;
        vector<int> temp;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                temp.push_back(mat[i][j]);
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                newMatrix[i][j]= temp[(i*c)+j];
            }
        }
        return newMatrix;
    }
};