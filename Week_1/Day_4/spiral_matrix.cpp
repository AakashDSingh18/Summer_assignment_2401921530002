class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowSt=0;
        int colSt=0;
        int rowEnd= matrix.size();
        int colEnd= matrix[0].size();
        while(colSt<colEnd && rowSt<rowEnd){
            for(int j=colSt; j<colEnd; j++){
                ans.push_back(matrix[rowSt][j]);
            }
            rowSt++;
            for(int i=rowSt; i<rowEnd; i++){
                ans.push_back(matrix[i][colEnd-1]);
            }
            colEnd--;
            if(rowSt<rowEnd){
                for(int j=colEnd-1; j>=colSt; j--){
                    ans.push_back(matrix[rowEnd-1][j]);
                }
                rowEnd--;
            }
            if(colSt<colEnd){
                for(int i=rowEnd-1; i>=rowSt; i--){
                    ans.push_back(matrix[i][colSt]);
                }
                colSt++;
            }
        }
        return ans;
    }
};