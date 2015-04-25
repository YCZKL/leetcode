class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        /*//not-in-place
        vector<vector<int> > ret(matrix);
        int n=matrix.size();
        for(int i=n-1;i>=0;i--)
           for(int j=0;j<n;j++)
           {
               matrix[j][n-1-i]=ret[i][j];
           }
       */
      
       /* //in-place
         * clockwise rotate
         * first reverse up to down, then swap the symmetry 
         * 1 2 3     7 8 9     7 4 1
         * 4 5 6  => 4 5 6  => 8 5 2
         * 7 8 9     1 2 3     9 6 3
       */
       reverse(matrix.begin(),matrix.end());
       int n=matrix.size();
       for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
       
    }
};
