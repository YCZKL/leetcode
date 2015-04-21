class Solution {
public:
    int trailingZeroes(int n) {
       /* //方法一：从1到N中提取5的个数。超时。
        int total;
        for(int i=1;i<=n;i++)
        {
            int temp=i;
            while(temp%5==0)
            {
               total++;
               temp/=5;
            }
        }
        return total;
      */  
    //方法二:[n/k]代表1~n中能被k整除的个数
    
    int total=0;
    while(n)
    {
        total += n/5;
        n /= 5;
    }
    return total;
    
    }
};
