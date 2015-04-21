class Solution {
public:
    int maxSubArray(int A[], int n) {
       //DP算法 
        vector<int> dp(n);
        dp[0]=A[0];
        int answer=A[0];
        for(int i=0;i<n;i++)
        {
            dp[i]=max(dp[i-1]+A[i],A[i]);
            answer=max(answer,dp[i]);
        }
       return answer;
    }
};
