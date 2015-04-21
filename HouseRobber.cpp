class Solution {
public:
    int rob(vector<int> &num) {
        int len=num.size();
        if(len==0)
         return 0;
        vector<int> dp(num);
        dp[0]=num[0];
        for(int i=1;i<len;i++){
            if(i<2)
            dp[i]=max(dp[0],num[i]);
            else
            dp[i]=max(dp[i-2]+num[i],dp[i-1]);
        }
       return  dp[len-1] ;
    }
};
