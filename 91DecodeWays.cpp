class Solution {
public:
    int numDecodings(string s) {
        
        int len=s.length();
        if(len==0)
          return 0;
        vector<int> dp;
        dp.resize(len);
        
        int i=0;
        for(;i<len;i++){
            dp[i]=0;
            if(i==0){//i等于0
                if ('1' <= s[i] && s[i] <= '9')
                    dp[i] = 1;
            }
            else {//i大于等于1
                string tmp(s, i-1, 2);
                if ("10" <= tmp && tmp <= "26")
                    if (i > 1)
                        dp[i] += dp[i-2];
                    else
                        dp[i] += 1;//i==1，没有i-2这个index
              if ('1' <= s[i] && s[i] <= '9')
                    dp[i] += dp[i-1];
            }
        }
        return dp[len-1];
    }
};
