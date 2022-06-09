    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>myRow(row, -1);
        vector<int>myCol(col, -1);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    myRow[i] = 0;
                    myCol[j] = 0;
                }
            }
        }
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if((myRow[i] == 0) || (myCol[j] == 0)){
                    matrix[i][j] = 0;
                }
            }
        }
    }