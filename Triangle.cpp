class Solution {
public:
    int minimumTotal(vector<vector<int>> &triangle) {
         /*//动态规划方法。但是内存要求超过O(n).
         int row=triangle.size();
         vector<vector<int>> dp(triangle);//初始化和triangle一样大小的矩阵
         for(int i=0;i<row;i++)
         {   
             int col=triangle[i].size();
             for(int j=0;j<col;j++)
             {
                 if(i==0){
                     if(j==0)
                      dp[i][j]=triangle[i][j];
                 }
                 else if(j==0)
                 dp[i][j]=dp[i-1][j]+triangle[i][j];
                 else if(j==col-1)
                 dp[i][j]=dp[i-1][j-1]+triangle[i][j];
                 else
                 dp[i][j]=min(dp[i-1][j-1],dp[i-1][j])+triangle[i][j];
             }
         }
         int answer=dp[row-1][0];
         for(int k=0;k<triangle[row-1].size();k++) 
              answer=min(dp[row-1][k],answer);
         return answer;
         */
         for (int i = triangle.size() - 2; i >= 0; --i)  
        {  
            for (int j = 0; j < triangle[i].size(); ++j)  
            {  
                triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);  
            }  
        }  
        return triangle[0][0];  
  
    }
};
