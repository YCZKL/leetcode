class Solution {
public:
    int reverse(int x) {
        bool negative_flag=false;//是否为负数
        if(x==INT_MIN)  
        /*这里必须要判断应为 INT_MIN为了表示方便用八位 
        二进制为 1000 0000  进行x=-x运算时，计算机中用补码相乘，
        -1的补码为原码除符号位外取反加1  也就是 1000 0001 
        取反加一补码变为 1111 1111，所以x=-x变为补码乘法 1000 0000*1111 1111 =1000 0000，
        x又等于了INT_MIN ,所以当while循环中的x并没有为正数。*/
        return 0;
        if(x<0)
        {
            x=-x;
            negative_flag=true;
        }
        long long result=0;
        while(x!=0)
        {
            result=result*10+x%10;
            x=x/10;
        }
        if(result>INT_MAX)
            return 0;
        if(negative_flag)
            return -result;
         else
             return result;
   /*
    long long result=0;
    while(x){
        result=result*10+x%10;
            x=x/10; 
    }
    if(x<INT_MIN||x>INT_MAX)
        return 0;
    else
        return result;
    */    
    }
};
