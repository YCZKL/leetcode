class Solution {
public:
    vector<vector<int> > generate(int numRows)
    {
         int row,col;		
		vector<vector<int>> A; 
		for(row=0;row<numRows;row++)
		{   
			vector<int> temp;				
			for(col=0;col<=row;col++)
			   {
				   if(col==0||col==row)
				      temp.push_back(1);
				   else
					   temp.push_back(A[row-1][col-1] + A[row-1][col]);
			   }
			A.push_back(temp);
		}
	 return A;
    }
};
