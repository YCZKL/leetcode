class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> A;
        int row,col;
        for(row=0;row<rowIndex+1;row++)
          {
              vector<int> temp;
              for(col=0;col<=row;col++)
              {
                  if(col==0||col==row)
                   temp.push_back(1);
                   else
                   temp.push_back(A[row-1][col]+A[row-1][col-1]);
              }
             A.push_back(temp);
          }
        
       return A[rowIndex]; 
    }
};
