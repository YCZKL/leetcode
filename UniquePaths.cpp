class Solution {
public:
    int uniquePaths(int m, int n) {
        /*简单的动态规划
        int dp[m][n];
        dp[0][0]=1;
        for(int i=0;i<m;i++)
          for(int j=0 ;j<n;j++)
          {
              if(i==0){
                 if(j==0)
                 dp[i][j]=dp[0][0];
                 else
                 dp[i][j]=dp[i][j-1];
              }
              else if(j==0)
                 dp[i][j]=dp[i-1][j]; 
              else
                 dp[i][j]=dp[i-1][j]+dp[i][j-1];
          }
      return dp[m-1][n-1]; 
      */
      //优化之后的方法
       vector<int> v(n, 1);  
        for(int i=1; i<m; ++i){  
            for(int j=1; j<n; ++j){  
                v[j]+=v[j-1];  
            }  
        }  
        return v[n-1];  
    }
};
