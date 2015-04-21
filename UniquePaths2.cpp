class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        
        vector<vector<int> > dp(obstacleGrid);
        dp[0][0] = obstacleGrid[0][0] == 1 ? 0 : 1;
        
        for(int i = 1; i < dp.size(); i++)
            dp[i][0] = obstacleGrid[i][0] == 1 ? 0 : dp[i-1][0];
             
        for(int i = 1; i < dp[0].size(); i++)
             dp[0][i] = obstacleGrid[0][i] == 1 ? 0 : dp[0][i-1];
            
        for(int i = 1; i < dp.size(); i++)
            for(int j = 1; j < dp[i].size(); j++)
                 dp[i][j] = obstacleGrid[i][j] == 1 ? 0 : dp[i-1][j] + dp[i][j-1];
                 
      return dp[dp.size()-1][dp[0].size()-1]; 
    }
};
