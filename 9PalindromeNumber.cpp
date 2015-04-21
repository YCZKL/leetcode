bool isPalindrome(int x) {
     if(x<0)
         return false;
        if(x==0)
         return true;
        int base=1;
        while(x/base>=10){//设置一个base为10^n，用来取出数的最高位
            base *= 10;
        }
        while(x){
            int leftDigit=x/base;
            int rightDigit=x%10;
            if(leftDigit!=rightDigit)
                return false;
                
            x -= base * leftDigit;//去掉高位
            x /=10;//去掉低位
            base /=100;
        }
        return true;
    
}
