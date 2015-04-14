uint32_t reverseBits(uint32_t n) {
   uint32_t answer=0;
   uint32_t i;
   for(i=0;i<32;i++)
     {
        answer<<=1; //先将答案左移一位为下一个值留出来一个位置  
       if(n&1)  
           answer|=1; //如果value的最后一位为0，则将answer的最后一位和1相与。  
       n>>=1;
      }
   return answer;
}
