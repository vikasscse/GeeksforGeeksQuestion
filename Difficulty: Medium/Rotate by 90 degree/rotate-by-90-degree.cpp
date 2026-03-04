// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix) {
    // Your code goes here
    int n=matrix.size();
        for(int i=0;i<matrix.size()-1;i++){
            for(int j=i+1;j<matrix[0].size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<(matrix[0].size())/2;j++){
               int temp=matrix[i][j];
               matrix[i][j]=matrix[i][n-1-j];
               matrix[i][n-1-j]=temp;
            }
        }
}
