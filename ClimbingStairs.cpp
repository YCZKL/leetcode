class Solution {
public:
    int climbStairs(int n) {
       /* 
        int prev = 0;
        int cur = 1;
        for(int i = 1; i <= n ; ++i){
            int tmp = cur;
            cur = prev + cur;
            prev = tmp;
        }
        return cur;
        */
       //斐波那契数列通项公式
        double s = sqrt(5);
        return floor((pow((1+s)/2, n+1) + pow((1-s)/2, n+1))/s + 0.5);
    }
};
