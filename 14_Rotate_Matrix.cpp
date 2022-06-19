// Leetcode question of rotationg the matrix image by 90degree
void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        // Findng the transpose of the matrix
        for(int i=0; i<row; i++){
            for(int j=i; j<row; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // swapping the starting and ending values with each other
        for(int i=0; i<row; i++){
            int start = 0, end = row-1;
            while(start <= end){
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }

// Codestudio question of rotating the matrix clockwise

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int itop = 0, ibottom = n-1, cstart = 0, cstop = m-1;
    while(itop < ibottom && cstart < cstop){
        int temp = mat[itop][itop];
        for(int i=cstart+1; i<=cstop; i++){
            swap(temp, mat[itop][i]);
        }
        for(int i=itop+1; i<=ibottom; i++){
            swap(temp, mat[i][cstop]);
        }
        for(int i=cstop-1; i>=cstart; i--){
            swap(temp, mat[ibottom][i]);
        }
        for(int i=ibottom-1; i>=itop; i--){
            swap(temp, mat[i][cstart]);
        }
        itop++;
        ibottom--;
        cstart++;
        cstop--;        
    }
}