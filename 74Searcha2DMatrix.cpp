bool searchMatrix(int **matrix, int m, int n, int target) {
    int i,j;
    if((matrix[m-1][n-1]<target)&&(matrix[0][0]>target))
        return false;
    else
    {
        for(i=m-1;i>=0;i--)
        {
            if(matrix[i][0]<=target)
            {
                for(j=0;j<n;j++)
                 {
                     if(matrix[i][j]==target)
                     return true;
                 }
            }
         }
          return false;
    }
   
}
