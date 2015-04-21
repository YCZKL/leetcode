class Solution {
public:
    double pow(double x, int n) {
        /*//超时
        if(n==0)  
            return 1.0;  
        if(n<0)  
            return 1.0/pow(x,-n);
        double half = pow(x,n>>1);  
        if(n%2==0)  
             return half*half;  
        else  
             return half*half*x;
        */
        
        /*//超时
        if(n==0)  
            return 1.0;  
        if(n<0)  
            return 1.0 / pow(x,-n);  
        double ans = 1.0 ;  
        for(; n>0; x *= x, n>>=1)  
        {  
            if(n&1>0)  
                ans *= x;  
        }  
        return ans;  
        */
        
        if(n<0)  
        {  
            if(n==INT_MIN)  
                return 1.0 / (pow(x,INT_MAX)*x);  
            else  
                return 1.0 / pow(x,-n);  
        }  
        if(n==0)  
            return 1.0;  
        double ans = 1.0 ;  
        for(;n>0; x *= x, n>>=1)  
        {  
            if(n&1)  
                ans *= x;  
        }  
        return ans;  
    }
};
